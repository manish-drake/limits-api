#include "limitsprovider.h"
#include "class2single.h"
#include "class1single.h"
#include "class1diversity.h"

LimitsProvider LimitsProvider::m_instance;

LimitsProvider::LimitsProvider()
{
}

LimitsProvider::~LimitsProvider()
{
}

std::unique_ptr<Limits> LimitsProvider::Get(const XpndrClassEnum &xpndrClass)
{
    switch (xpndrClass)
    {
    case CLASS2SINGLE:
        return std::unique_ptr<Limits>(new Class2Single());
    case CLASS1SINGLE:
        return std::unique_ptr<Limits>(new Class1Single());
    case CLASS1DIVERSITY:
        return std::unique_ptr<Limits>(new Class1Diversity());
    case SIF:
    default:
        return std::unique_ptr<Limits>(new Limits());
    }
}