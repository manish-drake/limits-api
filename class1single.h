#ifndef CLASS1SINGLE_H
#define CLASS1SINGLE_H
#include <string>
#include "class2single.h"

using std::string;

class Class1Single : public Class2Single
{
private:
public:
  Class1Single();
  ~Class1Single();
  limit getTxPwrdBW() override;  //#1
};
#endif //CLASS1SINGLE_H