#include "limits.h"
Limits::Limits()
{

}

Limits::~Limits()
{
}

limit Limits::getTxPwrDbW()
{
    return limit(18.5, 27);
}


limit Limits::getTxPwrDroopSifDb()
{
    return limit();
}

limit Limits::getTxPwrDroopModeSDb()
{
    return limit();
}
