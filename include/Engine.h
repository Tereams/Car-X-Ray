#pragma once

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
    double getRPM() const;
    double getTorque() const;
    double getTemperature() const;

private:
    bool running_;

    double throttle_;

    double rpm_;
    double torque_;
    double temperature_;
};
