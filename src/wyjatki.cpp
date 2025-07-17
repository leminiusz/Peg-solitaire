#include "wyjatki.h"

wyjatek_samotnika::wyjatek_samotnika(const std::string& message) : std::logic_error(message) {}

niepoprawne_polecenie::niepoprawne_polecenie(const std::string& message) : wyjatek_samotnika(message) {}

zly_format_polecenia::zly_format_polecenia(const std::string& message)
    : niepoprawne_polecenie("Zly format polecenia: " + message) {}

niepoprawna_kolumna::niepoprawna_kolumna(char col)
    : niepoprawne_polecenie("Niepoprawna kolumna: " + std::string(1, col) + ". Dozwolone A-G.") {}

niepoprawny_rzad::niepoprawny_rzad(char row)
    : niepoprawne_polecenie("Niepoprawny rzad: " + std::string(1, row) + ". Dozwolone 1-7.") {}

niepoprawny_kierunek::niepoprawny_kierunek(char dir)
    : niepoprawne_polecenie("Niepoprawny kierunek: " + std::string(1, dir) + ". Dozwolone L, R, U, D.") {}

niepoprawny_ruch::niepoprawny_ruch(const std::string& message) : wyjatek_samotnika("Niepoprawny ruch: " + message) {}

ruch_poza_plansze::ruch_poza_plansze() : niepoprawny_ruch("Probujesz wykonac ruch poza dozwolony obszar planszy.") {}

pole_startowe_puste_lub_niedostepne::pole_startowe_puste_lub_niedostepne() : niepoprawny_ruch("Pole startowe jest puste lub niedostepne.") {}

brak_pionka_do_zbicia::brak_pionka_do_zbicia() : niepoprawny_ruch("Na polu posrednim nie ma pionka do zbicia lub jest ono niedostepne.") {}

pole_docelowe_zajete_lub_niedostepne::pole_docelowe_zajete_lub_niedostepne() : niepoprawny_ruch("Pole docelowe jest zajete przez inny pionek lub jest niedostepne.") {}