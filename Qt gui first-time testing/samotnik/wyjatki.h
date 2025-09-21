#ifndef WYJATKI_H
#define WYJATKI_H

#include <stdexcept>
#include <string>

class wyjatek_samotnika : public std::logic_error {
public:
    explicit wyjatek_samotnika(const std::string& message);
};

class niepoprawne_polecenie : public wyjatek_samotnika {
public:
    explicit niepoprawne_polecenie(const std::string& message);
};

class zly_format_polecenia : public niepoprawne_polecenie {
public:
    explicit zly_format_polecenia(const std::string& message);
};

class niepoprawna_kolumna : public niepoprawne_polecenie {
public:
    explicit niepoprawna_kolumna(char col);
};

class niepoprawny_rzad : public niepoprawne_polecenie {
public:
    explicit niepoprawny_rzad(char row);
};

class niepoprawny_kierunek : public niepoprawne_polecenie {
public:
    explicit niepoprawny_kierunek(char dir);
};

class niepoprawny_ruch : public wyjatek_samotnika {
public:
    explicit niepoprawny_ruch(const std::string& message);
};

class ruch_poza_plansze : public niepoprawny_ruch {
public:
    explicit ruch_poza_plansze();
};

class pole_startowe_puste_lub_niedostepne : public niepoprawny_ruch {
public:
    explicit pole_startowe_puste_lub_niedostepne();
};

class brak_pionka_do_zbicia : public niepoprawny_ruch {
public:
    explicit brak_pionka_do_zbicia();
};

class pole_docelowe_zajete_lub_niedostepne : public niepoprawny_ruch {
public:
    explicit pole_docelowe_zajete_lub_niedostepne();
};

#endif // WYJATKI_H