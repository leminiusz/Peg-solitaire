#include "samotnik_model.h"
#include "wyjatki.h"
#include <stdexcept> // std::out_of_range
#include <cctype>    // std::toupper

SamotnikModel::SamotnikModel() : liczbaPionkow(0) {
    plansza.resize(ROZMIAR_PLANSZY, std::vector<StanPola>(ROZMIAR_PLANSZY));

    for (int i = 0; i < ROZMIAR_PLANSZY; ++i) {
        for (int j = 0; j < ROZMIAR_PLANSZY; ++j) {
            if ((i < 2 || i > 4) && (j < 2 || j > 4)) {
                plansza[i][j] = StanPola::NIEDOSTEPNE;
            } else {
                plansza[i][j] = StanPola::PIONEK;
                liczbaPionkow++;
            }
        }
    }
    plansza[3][3] = StanPola::PUSTE;
    liczbaPionkow--;
}

bool SamotnikModel::czyWPlanszy(int r, int c) const {
    return r >= 0 && r < ROZMIAR_PLANSZY && c >= 0 && c < ROZMIAR_PLANSZY;
}

StanPola SamotnikModel::getStanPola(int r, int c) const {
    if (!czyWPlanszy(r,c)) {
        throw std::out_of_range("Proba dostepu do pola poza plansza w modelu.");
    }
    return plansza[r][c];
}

int SamotnikModel::getLiczbaPionkow() const {
    return liczbaPionkow;
}

void SamotnikModel::wykonajRuch(int r1, int c1, char kierunek) {
    if (!czyWPlanszy(r1, c1) || plansza[r1][c1] != StanPola::PIONEK) {
        throw pole_startowe_puste_lub_niedostepne();
    }

    int dr = 0, dc = 0;
    switch (std::toupper(kierunek)) {
        case 'L': dc = -1; break;
        case 'R': dc = 1;  break;
        case 'U': dr = -1; break;
        case 'D': dr = 1;  break;
        default: throw niepoprawny_kierunek(kierunek);
    }

    int r2 = r1 + dr;
    int c2 = c1 + dc;
    int r3 = r1 + 2 * dr;
    int c3 = c1 + 2 * dc;

    if (!czyWPlanszy(r2, c2) || !czyWPlanszy(r3, c3)) {
        throw ruch_poza_plansze();
    }

    if (plansza[r2][c2] != StanPola::PIONEK) {
        throw brak_pionka_do_zbicia();
    }

    if (plansza[r3][c3] != StanPola::PUSTE) {
        throw pole_docelowe_zajete_lub_niedostepne();
    }

    plansza[r1][c1] = StanPola::PUSTE;
    plansza[r2][c2] = StanPola::PUSTE;
    plansza[r3][c3] = StanPola::PIONEK;
    liczbaPionkow--;
}

bool SamotnikModel::czyMozliweRuchy() const {
    char kierunki[] = {'L', 'R', 'U', 'D'};
    for (int r = 0; r < ROZMIAR_PLANSZY; ++r) {
        for (int c = 0; c < ROZMIAR_PLANSZY; ++c) {
            if (plansza[r][c] == StanPola::PIONEK) {
                for (char k : kierunki) {
                    int dr = 0, dc = 0;
                    switch (k) {
                        case 'L': dc = -1; break;
                        case 'R': dc = 1;  break;
                        case 'U': dr = -1; break;
                        case 'D': dr = 1;  break;
                    }
                    int r2 = r + dr;
                    int c2 = c + dc;
                    int r3 = r + 2 * dr;
                    int c3 = c + 2 * dc;

                    if (czyWPlanszy(r2, c2) && czyWPlanszy(r3, c3) &&
                        plansza[r2][c2] == StanPola::PIONEK &&
                        plansza[r3][c3] == StanPola::PUSTE) {
                        return true;
                    }
                }
            }
        }
    }
    return false;
}

bool SamotnikModel::czyWygranaIdealna() const {
    return liczbaPionkow == 1 && plansza[3][3] == StanPola::PIONEK;
}

bool SamotnikModel::czyWygrana() const {
    return liczbaPionkow == 1;
}