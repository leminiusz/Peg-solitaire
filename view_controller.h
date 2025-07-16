#ifndef VIEW_CONTROLLER_H
#define VIEW_CONTROLLER_H

#include <string>
#include "samotnik_model.h"

namespace ViewController {

    struct Polecenie {
        int rzad;
        int kolumna;
        char kierunek;
    };

    void wyswietlPlansze(const SamotnikModel& model);
    Polecenie interpretujPolecenie(const std::string& input);

}

#endif // VIEW_CONTROLLER_H