#ifndef LIMIT_H
#define LIMIT_H
#include <string>
#include <memory>
#include <iostream>
#include <functional>

using std::string;
using std::cout;
using std::endl;

using decimal = double;
#define UNUSED(x) (void)(x)
class limit
{
  private:
    decimal m_seed = 0;
    decimal m_min = 0;
    decimal m_max = 0;  
    int m_op = -1;
    decimal m_raw = 0;
    std::function<decimal(decimal)> m_varMin;
    std::function<decimal(decimal)> m_varMax;

    bool m_varSeed;
    bool m_donTest;    

  public:
    limit();
    limit(const int &op, const decimal &change);
    limit(const decimal &min, const decimal &max);
    limit(std::function<decimal(decimal)> varMin, std::function<decimal(decimal)> varMax);
    static limit Create(decimal *seed, int *op, decimal *change);

    ~limit();
    decimal min();
    decimal max();
    inline decimal raw()
    {
      return m_raw;
    }
    inline bool doNotTest()
    {
        return m_donTest;
    }
    void setSeed(const decimal &seed);
    bool testArgs(const decimal &arg1, const decimal &arg2);
};
#endif //LIMIT_H