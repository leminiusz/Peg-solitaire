#include "view_controller.h"
#include "samotnik_model.h"
#include "wyjatki.h"
#include <iostream>
#include <cctype>

namespace ViewController {

    void wyswietlPlansze(const SamotnikModel& model) {
        std::cout << "\n  A B C D E F G\n";
        for (int i = 0; i < SamotnikModel::ROZMIAR_PLANSZY; ++i) {
            std::cout << i + 1 << " ";
            for (int j = 0; j < SamotnikModel::ROZMIAR_PLANSZY; ++j) {
                switch (model.getStanPola(i, j)) {
                    case StanPola::PUSTE:       std::cout << ". "; break;
                    case StanPola::PIONEK:      std::cout << "o "; break;
                    case StanPola::NIEDOSTEPNE: std::cout << "  "; break;
                }
            }
            std::cout << i + 1 << "\n";
        }
        std::cout << "  A B C D E F G\n";
        std::cout << "Pozostalo pionkow: " << model.getLiczbaPionkow() << std::endl;
    }

    Polecenie interpretujPolecenie(const std::string& input) {
        if (input.length() != 3) {
            throw zly_format_polecenia("Polecenie musi miec 3 znaki, np. F4L.");
        }

        char kol_char = std::toupper(input[0]);
        char rzad_char = input[1];
        char kier_char = std::toupper(input[2]);

        Polecenie p;

        if (kol_char >= 'A' && kol_char <= 'G') {
            p.kolumna = kol_char - 'A';
        } else {
            throw niepoprawna_kolumna(input[0]);
        }

        if (rzad_char >= '1' && rzad_char <= '7') {
            p.rzad = rzad_char - '1';
        } else {
            throw niepoprawny_rzad(input[1]);
        }

        if (kier_char == 'L' || kier_char == 'R' || kier_char == 'U' || kier_char == 'D') {
            p.kierunek = kier_char;
        } else {
            throw niepoprawny_kierunek(input[2]);
        }
        return p;
    }

}