#ifndef CLASS2SINGLE_H
#define CLASS2SINGLE_H
#include <string>
#include "limits.h"

using std::string;

class Class2Single: public Limits 
{
  private:
  public:
    Class2Single();
    ~Class2Single();
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

};
#endif //CLASS2SINGLE_H