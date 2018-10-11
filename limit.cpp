#include "limit.h"
limit::limit()
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