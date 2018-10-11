#ifndef LIMITS_H
#define LIMITS_H
#include <string>
#include "limit.h"
using std::string;

class Limits
{
private:
public:
  Limits();
  ~Limits();

  virtual limit getTxPwrDbW(); //#	1

  virtual limit getTxPwrDroopSifDb();   //#	2
  virtual limit getTxPwrDroopModeSDb(); //#	3

  virtual limit getTxFreqAccySifMHz();   //#	4
  virtual limit getTxFreqAccyModeSMHz(); //#	5
  virtual limit getTxPulseWdSIFUs();   //#	6
  virtual limit getTxPulseSpSIFUs();   //#	7
  virtual limit getTxPulseWdModeSUs(); //#	8
  virtual limit getTxPulseSpModeSUs(); //#	9
  virtual limit getTxDvrstIsoDB();     //#	10

  virtual limit getRepDlySIFUs();   //#	11
  virtual limit getRepDlySIFACUs(); //#	12
  virtual limit getRepDlyModeSUs(); //#	13

  virtual limit getRepJitSIFUs(); //#	14
  virtual limit getRepJitModeS(); //#	15

  virtual limit getRxMTLSIFDBm(); //#	16

  virtual limit getRxMTLModeSDBm(); //#	17

  virtual limit getRxMTLSIFACModeSDB(); //#	18

  virtual limit getRxSLSSupSIFDB();       //#	19
  virtual limit getRxSLSNoSupSIFDB();     //#	20
  virtual limit getRxSLSSupModeSDB();     //#	21
  virtual limit getRxSLSNoSupModeSDB();   //#	22
  virtual limit getRxSLSSupAlClDB();      //#	23
  virtual limit getRxSLSNoSupAlClDB();    //#	24
  virtual limit getRxSLSSupATCAlClDB();   //#	25
  virtual limit getRxSLSNoSupATCAlClDB(); //#	26
};
#endif //LIMITS_H