#pragma once

#include "Differential.h"
#include "Engine.h"
#include "Transmission.h"

class Car {

    private:
        Engine engine;
        Transmission transmission;
        Differential differential;

    public:
        Car(): engine(),transmission(),differential()
        {
        }
};
