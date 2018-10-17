#include "class2single.h"
Class2Single::Class2Single()
{
}

Class2Single::~Class2Single()
{
}

limit Class2Single::getTxPwrDroopModeSdB()
{
    return Limits->getTxPwrDroopModeSdB();
}
limit Class2Single::getTxFreqAccySifMHz()
{
    Limits limits;
    return limits.getTxFreqAccySifMHz();
}
limit Class2Single::getTxFreqAccyModeSMHz()
{
    Limits limits;
    return limits.getTxFreqAccyModeSMHz();
}
limit Class2Single::getRepDlyModeSus()
{
    Limits limits;
    return limits.getRepDlyModeSus();
}
limit Class2Single::getRepJitModeSus()
{
    Limits limits;
    return limits.getRepJitModeSus();
}
limit Class2Single::getRxMTLModeSdBm()
{
    Limits limits;
    return limits.getRxMTLModeSdBm();
}
limit Class2Single::getRxSLSSupModeSdB()
{
    Limits limits;
    return limits.getRxSLSSupModeSdB();
}
limit Class2Single::getRxSLSNoSupModeSdB()
{
    Limits limits;
    return limits.getRxSLSNoSupModeSdB();
}
limit Class2Single::getRxSLSSupATCAlCldB()
{
    Limits limits;
    return limits.getRxSLSSupATCAlCldB();
}
limit Class2Single::getRxSLSNoSupATCAlCldB()
{
    Limits limits;
    return limits.getRxSLSNoSupATCAlCldB();
}