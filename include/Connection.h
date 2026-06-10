#pragma once

#include "RotationalState.h"

enum class ConnectionType {
    DirectCoupling,
    SplinedShaft,
    KeyedShaft,
    FlangeCoupling,
    GearMesh,
    BeltDrive,
    ChainDrive
};

class RotationalOnePort {
public:
    RotationalState portState;
    ConnectionType portConnectionType;
};

class RotationalTwoPort {
public:
    RotationalState inputState;
    RotationalState outputState;

    ConnectionType inputConnectionType;
    ConnectionType outputConnectionType;
};

class RotationalThreePort {
public:
    RotationalState inputState;
    RotationalState leftOutputState;
    RotationalState rightOutputState;

    ConnectionType inputConnectionType;
    ConnectionType leftOutputConnectionType;
    ConnectionType rightOutputConnectionType;
};
