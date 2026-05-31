#pragma once

#include "RotationalState.h"

class Transmission {
public:
    Transmission();

    // control
    void setGear(int gear);
    void shiftUp();
    void shiftDown();

    // physical input
    void setInput(const RotationalState& input);

    // simulation
    void update(double deltaTime);

    // physical output
    RotationalState getOutput() const;

    // state query
    int getCurrentGear() const;
    double getCurrentGearRatio() const;
    bool isInNeutral() const;
    bool isInReverse() const;

private:
    int currentGear_;

    RotationalState input_;
    RotationalState output_;

    double efficiency_;
};
