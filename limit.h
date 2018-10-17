#ifndef LIMIT_H
#define LIMIT_H
#include <string>
#include <memory>
#include <iostream>
using std::string;
using std::cout;
using std::endl;

using decimal = double;

class limit
{
  private:
    decimal m_seed = 0;
    decimal m_min = 0;
    decimal m_max = 0;
    bool m_varSeed;
    bool m_donTest;

  public:
    limit();
    limit(const decimal &rangeFactor);
    limit(const decimal &min, const decimal &max);
    limit(const decimal &seed, const decimal &uLim, const decimal &lLim);
    static limit Create(decimal *seed, string *op, decimal *change);

    ~limit();
    decimal min();
    decimal max();
    inline bool doNotTest()
    {
        return m_donTest;
    }
    void setSeed(const decimal &seed);
    bool testArgs(const decimal &arg1, const decimal &arg2);
};
#endif //LIMIT_H