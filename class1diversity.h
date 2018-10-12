#ifndef CLASS1DIVERSITY_H
#define CLASS1DIVERSITY_H
#include <string>
#include "class1single.h"

using std::string;

class Class1Diversity:public Class1Single
{
  private:
  public:
    Class1Diversity();
    ~Class1Diversity();
    limit getTxDvrstIsodB() override;  //#10
};
#endif //CLASS1DIVERSITY_H