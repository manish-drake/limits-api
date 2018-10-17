#ifndef LIMITSPROVIDER_H
#define LIMITSPROVIDER_H
#include <string>
#include "limits.h"
#include <memory>
#include <map>
#include <iostream>
using std::string;
using std::cout;
using std::endl;

using std::string;

enum XpndrClassEnum
{
  SIF,
  CLASS2SINGLE,
  CLASS1SINGLE,
  CLASS1DIVERSITY
};

class LimitsProvider
{
private:
  LimitsProvider();
  ~LimitsProvider();
  static LimitsProvider m_instance;
  std::unique_ptr<Limits> getLimits(const int &classId);

public:
  static LimitsProvider *Instance()
  {
    return &m_instance;
  }

  std::unique_ptr<Limits> Get(const XpndrClassEnum &xpndrClass);

  std::map<int, const char*> tempmap()
  {
    std::map<int, const char*> m;
    m.insert(std::make_pair(1, "getTxPwrdBW"));
    m.insert(std::make_pair(2, "getTxPwrDroopSifdB"));
    m.insert(std::make_pair(3, "getTxPwrDroopModeSdB"));
    m.insert(std::make_pair(4, "getTxFreqAccySifMHz"));
    m.insert(std::make_pair(5, "getTxFreqAccyModeSMHz"));
    m.insert(std::make_pair(6, "getTxPulseWdSIFus"));
    m.insert(std::make_pair(7, "getTxPulseSpSIFus"));
    m.insert(std::make_pair(8, "getTxPulseWdModeSus"));
    m.insert(std::make_pair(9, "getTxPulseSpModeSus"));
    m.insert(std::make_pair(10, "getTxDvrstIsodB"));
    m.insert(std::make_pair(11, "getRepDlySIFus"));
    m.insert(std::make_pair(12, "getRepDlySIFACus"));
    m.insert(std::make_pair(13, "getRepDlyModeSus"));
    m.insert(std::make_pair(14, "getRepJitSIFus"));
    m.insert(std::make_pair(15, "getRepJitModeSus"));
    m.insert(std::make_pair(16, "getRxMTLSIFdBm"));
    m.insert(std::make_pair(17, "getRxMTLModeSdBm"));
    m.insert(std::make_pair(18, "getRxMTLSIFACModeSdB"));
    m.insert(std::make_pair(19, "getRxSLSSupSIFdB"));
    m.insert(std::make_pair(20, "getRxSLSNoSupSIFdB"));
    m.insert(std::make_pair(21, "getRxSLSSupModeSdB"));
    m.insert(std::make_pair(22, "getRxSLSNoSupModeSdB"));
    m.insert(std::make_pair(23, "getRxSLSSupAlCldB"));
    m.insert(std::make_pair(24, "getRxSLSNoSupAlCldB"));
    m.insert(std::make_pair(25, "getRxSLSSupATCAlCldB"));
    m.insert(std::make_pair(26, "getRxSLSNoSupATCAlCldB"));
    return m;
  }
};
#endif //LIMITSPROVIDER_H