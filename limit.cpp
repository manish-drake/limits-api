#include "limit.h"
limit::limit() : m_donTest{true}
{
}
limit::limit(const int &op, const decimal &raw) : m_op{op},
                                                  m_raw{raw}
{
}

limit::limit(const decimal &min, const decimal &max) : m_min{min},
                                                       m_max{max},
                                                       m_varSeed{false}
{
}
limit::limit(std::function<decimal(decimal)> varMin, std::function<decimal(decimal)> varMax) : m_varMin{varMin},
                                                                                               m_varMax{varMax},
                                                                                               m_varSeed{true}
{
}

limit limit::Create(decimal *seed, string *op, decimal *change)
{
    if (!op)
    {
        cout << "do not test!" << endl;
        return limit();
    }
    else
    {
        if (!seed)
        {
            if (*op == "+") //0
            {
                cout << "min: arg, max: "
                     << "arg + " << *change << endl;
                return limit(0, *change);
            }
            else if (*op == "-") //1
            {
                cout << "min: arg - " << *change << ", max: arg" << endl;
                return limit(1, *change);
            }
            else if (*op == "+/-") //2
            {
                cout << "min: arg - " << *change << ", max: arg + " << *change << endl;
                return limit(2, *change);
            }
            else if ((*op == "<=") /*3*/ || (*op == ">=") /*4*/)
            {
                cout << "arg2 " << *op << " arg1 + (" << *change << ")" << endl;
                limit l;
                l.m_varSeed = true;
                l.m_raw = *change;
                l.m_op = (*op == "<=") ? 3 : 4;
                return l;
            }
            else
            {
                cout << "Unknown" << endl;
                return limit();
            }
        }
        else
        {
            if (*op == "+")
            {
                cout << "min: " << *seed << ", max: " << *seed + *change << endl;
                return limit(*seed, (*seed + *change));
            }
            else if (*op == "-")
            {
                cout << "min: " << *seed - *change << ", max: " << *seed << endl;
                return limit((*seed - *change), *seed);
            }
            else if (*op == "+/-")
            {
                cout << "min: " << *seed - *change << ", max: " << *seed + *change << endl;
                return limit((*seed - *change), (*seed + *change));
            }
            else
            {
                cout << "Unknown" << endl;
                return limit();
            }
        }
    }
    return limit();
}

limit::~limit()
{
}
decimal limit::min()
{
    if (m_varSeed)
    {
        return m_varMin(m_seed);
    }
    else
        return m_min;
}

decimal limit::max()
{
    if (m_varSeed)
    {
        return m_varMax(m_seed);
    }
    else
        return m_max;
}
void limit::setSeed(const decimal &seed)
{
    m_seed = seed;
}

bool limit::testArgs(const decimal &arg1, const decimal &arg2)
{
    if (m_varSeed)
    {
    }
}