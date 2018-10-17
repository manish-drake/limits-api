#ifndef LIMITS_H
#define LIMITS_H
#include <string>
#include "limit.h"
using std::string;

class Limits
{
private:
  limit limits[27];
public:
  Limits();
  ~Limits();

  virtual limit getTxPwrdBW(); //#	1

  virtual limit getTxPwrDroopSifdB();   //#	2
  virtual limit getTxPwrDroopModeSdB(); //#	3

  virtual limit getTxFreqAccySifMHz();   //#	4
  virtual limit getTxFreqAccyModeSMHz(); //#	5
  virtual limit getTxPulseWdSIFus();   //#	6
  virtual limit getTxPulseSpSIFus();   //#	7
  virtual limit getTxPulseWdModeSus(); //#	8
  virtual limit getTxPulseSpModeSus(); //#	9
  virtual limit getTxDvrstIsodB();     //#	10

  virtual limit getRepDlySIFus();   //#	11
  virtual limit getRepDlySIFACus(); //#	12
  virtual limit getRepDlyModeSus(); //#	13

  virtual limit getRepJitSIFus(); //#	14
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

  void SetLimit(const int& fxId, const limit &lmt);
};
#endif //LIMITS_H