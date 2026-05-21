#pragma once

#include "../include/RotationalState.h"

class Differential {
public:
    Differential();

    // Physical input from transmission
    void setInput(const RotationalState& input);

    // Simulation
    void update(double deltaTime);

    // Physical outputs to wheels
    RotationalState getLeftOutput() const;
    RotationalState getRightOutput() const;

    // Configuration
    void setFinalDriveRatio(double ratio);
    double getFinalDriveRatio() const;

private:
    RotationalState input_;

    RotationalState leftOutput_;
    RotationalState rightOutput_;

    double finalDriveRatio_;
    double efficiency_;
};
