#ifndef SAMOTNIK_MODEL_H
#define SAMOTNIK_MODEL_H

#include <vector>
#include <string>
#include "wyjatki.h"

enum class StanPola { PUSTE, PIONEK, NIEDOSTEPNE };

class SamotnikModel {
public:
    static const int ROZMIAR_PLANSZY = 7;

    SamotnikModel();

    StanPola getStanPola(int r, int c) const;
    int getLiczbaPionkow() const;

    void wykonajRuch(int r1, int c1, char kierunek);
    bool czyMozliweRuchy() const;
    bool czyWygranaIdealna() const;
    bool czyWygrana() const;

private:
    std::vector<std::vector<StanPola>> plansza;
    int liczbaPionkow;

    bool czyWPlanszy(int r, int c) const;
};

#endif // SAMOTNIK_MODEL_H