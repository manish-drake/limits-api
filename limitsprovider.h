#ifndef LIMITSPROVIDER_H
#define LIMITSPROVIDER_H
#include <string>
#include "limits.h"
#include <memory>

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

  public:
    static LimitsProvider *Instance()
    {
        return &m_instance;
    }

    std::unique_ptr<Limits> Get(const XpndrClassEnum &xpndrClass);
};
#endif //LIMITSPROVIDER_H