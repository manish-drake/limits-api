#include "class2single.h"
Class2Single::Class2Single()
{
}

Class2Single::~Class2Single()
{
}
/*
    limit getTxPwrDroopModeSdB() override;  //#3
    limit getTxFreqAccySifMHz() override;  //#4
    limit getTxFreqAccyModeSMHz() override;  //#5
    limit getRepDlyModeSus() override;  //#13
    limit getRepJitModeSus() override;  //#15
    limit getRxMTLModeSdBm() override;  //#17
    limit getRxSLSSupModeSdB() override;  //#21
    limit getRxSLSNoSupModeSdB() override;  //#22
    limit getRxSLSSupATCAlCldB() override;  //#25
    limit getRxSLSNoSupATCAlCldB() override;  //#26
*/
limit Class2Single::getTxPwrDroopModeSdB()
{
    return limits[2];
}
limit Class2Single::getTxFreqAccySifMHz()
{
    return limits[3];
}
limit Class2Single::getTxFreqAccyModeSMHz()
{
    return limits[4];
}
limit Class2Single::getRepDlyModeSus()
{
    return limits[12];
}
limit Class2Single::getRepJitModeSus()
{
    return limits[14];
}
limit Class2Single::getRxMTLModeSdBm()
{
    return limits[16];
}
limit Class2Single::getRxSLSSupModeSdB()
{
    return limits[20];
}
limit Class2Single::getRxSLSNoSupModeSdB()
{
    return limits[21];
}
limit Class2Single::getRxSLSSupATCAlCldB()
{
    return limits[24];
}
limit Class2Single::getRxSLSNoSupATCAlCldB()
{
    return limits[25];
}