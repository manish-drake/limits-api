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
    limit getTxPwrDroopModeSDb() override;
};
#endif //CLASS2SINGLE_H