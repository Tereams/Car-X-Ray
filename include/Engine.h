#pragma once

#include "RotationalState.h"

class Engine {
public:
    Engine();

    // lifecycle
    void start();
    void stop();

    // control
    // throttle range: [0.0, 1.0]
    void setThrottle(double value);

    // simulation
    // deltaTime in seconds
    void update(double deltaTime);

    // outputs
    RotationalState getOutput() const;
    double getTemperature() const;

private:
    bool running_;

    double throttle_;

    RotationalState output_;
    double temperature_;
};
