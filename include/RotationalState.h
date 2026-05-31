#pragma once

struct RotationalState {
    double torqueNm;
    double rpm;

    RotationalState(){
        torqueNm = 0.0;
        rpm = 0.0;
    }

    RotationalState(double torqueNm, double rpm){
        this->torqueNm = torqueNm;
        this->rpm = rpm;
    }
};
