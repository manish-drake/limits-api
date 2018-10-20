#ifndef LIMITS_H
#define LIMITS_H
#include <string>
#include "limit.h"
using std::string;

class Limits
{

protected:
  limit limits[26];

  virtual limit getTxPwrdBW(); //#	1

  virtual limit getTxPwrDroopSifdB();   //#	2
  virtual limit getTxPwrDroopModeSdB(); //#	3

  virtual limit getTxFreqAccySifMHz();   //#	4
  virtual limit getTxFreqAccyModeSMHz(); //#	5
  virtual limit getTxPulseWdSIFus();     //#	6
  virtual limit getTxPulseSpSIFus();     //#	7
  virtual limit getTxPulseWdModeSus();   //#	8
  virtual limit getTxPulseSpModeSus();   //#	9
  virtual limit getTxDvrstIsodB();       //#	10

  virtual limit getRepDlySIFus();   //#	11
  virtual limit getRepDlySIFACus(); //#	12
  virtual limit getRepDlyModeSus(); //#	13

  virtual limit getRepJitSIFus();   //#	14
  virtual limit getRepJitModeSus(); //#	15

  virtual limit getRxMTLSIFdBm(); //#	16

  virtual limit getRxMTLModeSdBm(); //#	17

  virtual limit getRxMTLSIFACModeSdB(); //#	18

  virtual limit getRxSLSSupSIFdB();       //#	19
  virtual limit getRxSLSNoSupSIFdB();     //#	20
  virtual limit getRxSLSSupModeSdB();     //#	21
  virtual limit getRxSLSNoSupModeSdB();   //#	22
  virtual limit getRxSLSSupAlCldB();      //#	23
  virtual limit getRxSLSNoSupAlCldB();    //#	24
  virtual limit getRxSLSSupATCAlCldB();   //#	25
  virtual limit getRxSLSNoSupATCAlCldB(); //#	26
  
public:
  Limits();
  ~Limits();

  void Populate();

  void SetLimit(const int &fxId, const limit &lmt);

  struct
  {
    struct
    {
      int Minimum;    //Watts  (Note within the power sub struct)
      int Maximum;    //Watts
      int DroopSIF;   //dB
      int DroopModeS; //dB
    } power;          //No TX needed, inside TX struct

    struct
    {
      int AccuracySIF; //Hz +/-
      int AccuracyModeS;
    } frequency;

    struct
    {
      float MinimumWidthSIF;     //uS
      float MaximumWidthSIF;     //uS
      float PulseSpacingSIF;   //uS
      float MinimumWidthModeS;   //uS
      float MaximumWidthModeS;   //uS
      float PulseSpacingModes; //uS
    } pulse;

    float DiversityIsolation;
  } TX;

  struct
  {
    struct
    {
      float MinimumSIF;
      float MaximumSIF;
      float SIFAtoC;
      float MinimumModeS;
      float MaximumModeS;
    } delay;
    struct
    {
      float SIF;
      float ModeS;
    } jitter;
  } Reply;

  struct
  {
    struct
    {
      int MinimumSIF;
      int MaximumSIF;
      int MinimumModeS;
      int MaximumModeS;
      int SIFAvsModeCvsModeS;
    } MTL;

    struct
    {
      struct
      {
        int SIF;
        int ModeS;
        int ATC_S_AlCl;
        int ATC_AlCl;
      } suppression;
      struct
      {
        int SIF;
        int ModeS;
        int ATC_S_AlCl;
        int ATC_AlCl;
      } noSuppression;
    } SLS;
  } RX;
};
#endif //LIMITS_H