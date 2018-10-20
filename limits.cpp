#include "limits.h"
#include "catalogue.h"

void Limits::Populate()
{
    TX.power.Minimum = this->getTxPwrdBW().min();
    TX.power.Maximum = this->getTxPwrdBW().max();
    TX.power.DroopSIF = this->getTxPwrDroopSifdB().raw();
    TX.power.DroopModeS = this->getTxPwrDroopModeSdB().raw();

    TX.frequency.AccuracySIF = this->getTxFreqAccySifMHz().raw();
    TX.frequency.AccuracyModeS = this->getTxFreqAccyModeSMHz().raw();

    TX.pulse.MinimumWidthSIF = this->getTxPulseWdSIFus().min();
    TX.pulse.MaximumWidthSIF = this->getTxPulseWdSIFus().max();
    TX.pulse.MinimumWidthModeS = this->getTxPulseWdModeSus().min();
    TX.pulse.MaximumWidthModeS = this->getTxPulseWdModeSus().max();
    TX.pulse.PulseSpacingSIF = this->getTxPulseSpSIFus().raw();
    TX.pulse.PulseSpacingModes = this->getTxPulseSpModeSus().raw();

    Reply.delay.MaximumSIF = this->getRepDlySIFus().max();
    Reply.delay.MinimumSIF = this->getRepDlySIFus().min();
    Reply.delay.MaximumModeS = this->getRepDlyModeSus().max();
    Reply.delay.MinimumModeS = this->getRepDlyModeSus().min();
    Reply.delay.SIFAtoC = this->getRepDlySIFACus().raw();

    Reply.jitter.SIF = this->getRepJitSIFus().raw();
    Reply.jitter.ModeS = this->getRepJitModeSus().raw();

    RX.MTL.MinimumSIF = this->getRxMTLSIFdBm().min();
    RX.MTL.MaximumSIF = this->getRxMTLSIFdBm().max();
    RX.MTL.MinimumModeS = this->getRxMTLModeSdBm().min();
    RX.MTL.MaximumModeS = this->getRxMTLModeSdBm().max();

    RX.MTL.SIFAvsModeCvsModeS = 1;

    
}

Limits::Limits()
{
    
}

Limits::~Limits()
{
}

limit Limits::getTxPwrdBW()
{
    return this->limits[0];
}
limit Limits::getTxPwrDroopSifdB()
{
    return this->limits[1];
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
    return this->limits[8];
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
    return this->limits[11];
}
limit Limits::getRepDlyModeSus()
{
    return this->limits[12];
}
limit Limits::getRepJitSIFus()
{
    return this->limits[13];
}
limit Limits::getRepJitModeSus()
{
    return this->limits[14];
}
limit Limits::getRxMTLSIFdBm()
{
    return this->limits[15];
}
limit Limits::getRxMTLModeSdBm()
{
    return this->limits[16];
}
limit Limits::getRxMTLSIFACModeSdB()
{
    return this->limits[17];
}
limit Limits::getRxSLSSupSIFdB()
{
    return this->limits[18];
}
limit Limits::getRxSLSNoSupSIFdB()
{
    return this->limits[19];
}
limit Limits::getRxSLSSupModeSdB()
{
    return this->limits[20];
}
limit Limits::getRxSLSNoSupModeSdB()
{
    return this->limits[21];
}
limit Limits::getRxSLSSupAlCldB()
{
    return this->limits[22];
}
limit Limits::getRxSLSNoSupAlCldB()
{
    return this->limits[23];
}
limit Limits::getRxSLSSupATCAlCldB()
{
    return this->limits[24];
}
limit Limits::getRxSLSNoSupATCAlCldB()
{
    return this->limits[25];
}

void Limits::SetLimit(const int& fxId, const limit &lmt)
{
    limits[fxId] = lmt;
}

