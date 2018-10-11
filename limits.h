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

    limit getTxPwrDbW();

    limit getTxPwrDroopSifDb();
    virtual limit getTxPwrDroopModeSDb();
};
#endif //LIMITS_H   