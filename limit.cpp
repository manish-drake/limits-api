#include "limit.h"
limit::limit():m_donTest{true}
{
}

limit::limit(const decimal &rangeFactor) : m_min{-rangeFactor},
                                           m_max{rangeFactor}
{
}

limit::limit(const decimal &min, const decimal &max) : m_min{min},
                                                       m_max{max}
{
}

limit::limit(const decimal &seed, const decimal &uLim, const decimal &lLim) : m_min{seed - uLim},
                                                                              m_max{seed + lLim}
{
}

limit limit::Create(decimal *seed, string *op, decimal *change)
{
    if (!op)
    {
        cout << "do not test!" << endl;
    }
    else
    {
        if (!seed)
        {
            if (*op == "+")
                {
                    cout << "min: arg, max: " << "arg + " << *change  << endl;
                    limit l(*change);
                    l.m_varSeed=true;
                    return l;
                }
            else if (*op == "-")
                {
                    cout << "min: arg - " << *change << ", max: arg" << endl;
                }
            else if (*op == "+/-")
                {
                    cout << "min: arg - " << *change << ", max: arg + " << *change << endl;
                }
            else if ((*op == "<=") || (*op == ">="))
                {
                    cout << "arg2 " << *op << " arg1 + (" << *change << ")" << endl;
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
                    cout << "min: " << *seed << ", max: " << *seed + *change  << endl;
                }
            else if (*op == "-")
                {
                    cout << "min: " << *seed - *change << ", max: " << *seed << endl;
                }
            else if (*op == "+/-")
                {
                    cout << "min: " << *seed - *change << ", max: " << *seed + *change << endl;
                }
            else
                {
                    cout << "Unknown" << endl;
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
    return m_min;
}

decimal limit::max()
{
    return m_max;
}
void limit::setSeed(const decimal &seed)
{
    if(m_varSeed)
    {
        m_seed = seed;
    }
}

bool limit::testArgs(const decimal &arg1, const decimal &arg2)
{
    if(m_varSeed)
    {

    }
}