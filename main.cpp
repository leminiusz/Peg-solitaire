#include <iostream>
#include <string>
#include <chrono>
#include <iomanip>
#include <limits> //std::numeric_limits

#include "samotnik_model.h"
#include "view_controller.h"
#include "wyjatki.h"

int main() {
    SamotnikModel model;
    std::string input_str;
    auto start_czasu = std::chrono::steady_clock::now();
    bool gra_zakonczona_poddaniem = false;

    std::cout << "Witaj w grze Samotnik!\n";
    std::cout << "Celem jest pozostawienie jednego pionka, najlepiej na srodku planszy.\n";
    std::cout << "Podawaj ruchy w formacie: KolumnaRzadKierunek (np. F4L, D3R).\n";
    std::cout << "Kolumny: A-G, Rzedy: 1-7.\n";
    std::cout << "Kierunki: L (lewo), R (prawo), U (gora), D (dol).\n";
    std::cout << "Wpisz 'Q' aby zakonczyc gre.\n";

    while (true) {
        ViewController::wyswietlPlansze(model);

        if (model.czyWygranaIdealna()) {
            std::cout << "\nGRATULACJE! Wygrana idealna! Pozostal 1 pionek na srodku!\n";
            break;
        }
        if (model.czyWygrana()) {
             std::cout << "\nGRATULACJE! Wygrales! Pozostal 1 pionek!\n";
            break;
        }
        if (!model.czyMozliweRuchy()) {
            std::cout << "\nKONIEC GRY. Brak mozliwych ruchow. Pozostalo pionkow: " << model.getLiczbaPionkow() << "\n";
            break;
        }

        std::cout << "Podaj ruch (np. D3R) lub 'Q' aby zakonczyc: ";
        if (!(std::cin >> input_str)) {
            if (std::cin.eof()) {
                std::cout << "\nKoniec pliku (EOF). Zamykanie gry.\n";
            } else {
                std::cout << "\nBlad odczytu. Zamykanie gry.\n";
                std::cin.clear();
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            }
            break;
        }


        if (input_str.length() == 1 && std::toupper(input_str[0]) == 'Q') {
            gra_zakonczona_poddaniem = true;
            std::cout << "Gra zakonczona przez uzytkownika.\n";
            break;
        }

        try {
            ViewController::Polecenie p = ViewController::interpretujPolecenie(input_str);
            model.wykonajRuch(p.rzad, p.kolumna, p.kierunek);
        } catch (const wyjatek_samotnika& e) {
            std::cerr << "Blad: " << e.what() << std::endl;
            std::cout << "Sprobuj ponownie.\n";

            if (std::cin.peek() != '\n' && std::cin.peek() != EOF) {
                 std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            }
        } catch (const std::exception& e) {
            std::cerr << "Niespodziewany blad systemowy: " << e.what() << std::endl;
             if (std::cin.peek() != '\n' && std::cin.peek() != EOF) {
                 std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            }
        }
    }

    auto koniec_czasu = std::chrono::steady_clock::now();
    std::chrono::duration<double> czas_trwania = koniec_czasu - start_czasu;

    std::cout << "\n--- Podsumowanie Gry ---\n";
    if (!gra_zakonczona_poddaniem) {
        if (model.czyWygranaIdealna()) {
            std::cout << "Status: Wygrana idealna! (1 pionek na srodku)\n";
        } else if (model.czyWygrana()) {
             std::cout << "Status: Wygrana! (1 pionek)\n";
        } else {
            std::cout << "Status: Przegrana (brak mozliwych ruchow)\n";
        }
    } else {
        std::cout << "Status: Gra poddana przez uzytkownika.\n";
    }
    std::cout << "Liczba pozostalych pionkow: " << model.getLiczbaPionkow() << std::endl;
    std::cout << std::fixed << std::setprecision(2);
    std::cout << "Czas trwania gry: " << czas_trwania.count() << " sekund.\n";

    return 0;
}