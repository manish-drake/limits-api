#include "limits.h"
#include "catalogue.h"

Limits::Limits()
{
    
}

Limits::~Limits()
{
}

limit Limits::getTxPwrdBW()
{
    return this->limits[0]; //limit();
}
limit Limits::getTxPwrDroopSifdB()
{
    return this->limits[1]
}
limit Limits::getTxPwrDroopModeSdB()
{
    return this->limits[2];
}
limit Limits::getTxFreqAccySifMHz()
{
    return this->limits[3];
}
limit Limits::getTxFreqAccyModeSMHz()
{
    return this->limits[4];
}
limit Limits::getTxPulseWdSIFus()
{
    return this->limits[5];
}
limit Limits::getTxPulseSpSIFus()
{
    return this->limits[6];
}
limit Limits::getTxPulseWdModeSus()
{
    return this->limits[7];
}
limit Limits::getTxPulseSpModeSus()
{
    return this->limits8[];
}
limit Limits::getTxDvrstIsodB()
{
    return this->limits[9];
}
limit Limits::getRepDlySIFus()
{
    return this->limits[10];
}
limit Limits::getRepDlySIFACus()
{
    return this->limits[12];
}
limit Limits::getRepDlyModeSus()
{
    return this->limits[13];
}
limit Limits::getRepJitSIFus()
{
    return this->limits[14];
}
limit Limits::getRepJitModeSus()
{
    return this->limits[15];
}
limit Limits::getRxMTLSIFdBm()
{
    return this->limits[16];
}
limit Limits::getRxMTLModeSdBm()
{
    return this->limits[17];
}
limit Limits::getRxMTLSIFACModeSdB()
{
    return this->limits[18];
}
limit Limits::getRxSLSSupSIFdB()
{
    return this->limits[19];
}
limit Limits::getRxSLSNoSupSIFdB()
{
    return this->limits[20];
}
limit Limits::getRxSLSSupModeSdB()
{
    return this->limits[21];
}
limit Limits::getRxSLSNoSupModeSdB()
{
    return this->limits[22];
}
limit Limits::getRxSLSSupAlCldB()
{
    return this->limits[23];
}
limit Limits::getRxSLSNoSupAlCldB()
{
    return this->limits[24];
}
limit Limits::getRxSLSSupATCAlCldB()
{
    return this->limits[25];
}
limit Limits::getRxSLSNoSupATCAlCldB()
{
    return this->limits[26];
}

void Limits::SetLimit(const int& fxId, const limit &lmt)
{
    limits[fxId] = lmt;
}