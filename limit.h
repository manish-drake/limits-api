#ifndef LIMIT_H
#define LIMIT_H
#include <string>
using std::string;

using decimal = double;

class limit
{
  private:
    decimal m_seed = 0;
    decimal m_min = 0;
    decimal m_max = 0;

  public:
    limit();
    limit(const decimal &rangeFactor);
    limit(const decimal &min, const decimal &max);
    limit(const decimal &seed, const decimal &uLim, const decimal &lLim);
    ~limit();
    decimal min();
    decimal max();
    bool doNotTest()
    {
        return true;
    }
};
#endif //LIMIT_H