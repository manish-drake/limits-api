#include "limitsprovider.h"
#include "class2single.h"
#include "class1single.h"
#include "class1diversity.h"
#include "dbcache.h"
#include "catalogue.h"

LimitsProvider LimitsProvider::m_instance;

LimitsProvider::LimitsProvider()
{
}

LimitsProvider::~LimitsProvider()
{
}

Limits_up LimitsProvider::getLimits(const int &classId)
{
    Limits_up limits(new Limits());
    up_catalogue lmtCat;
    if (DBCache::Current().Get("limits", lmtCat))
    {        
        auto lmts = lmtCat->Select_UP(apply_filter("Cls", classId));        
        auto m = tempmap();
        for (auto &lmt : *lmts)
        {
            int fxId = lmt->getInt("Fxid");
            std::shared_ptr<double> seed = nullptr;
            std::shared_ptr<double> chg = nullptr;
            std::shared_ptr<int> op = nullptr;
            if (lmt->hasValue("Seed", PlatformTypeEnum::PLAT_DBL))
                seed = std::shared_ptr<double>(new double(lmt->getDouble("Seed")));
            if (lmt->hasValue("Change", PlatformTypeEnum::PLAT_DBL))
                chg = std::shared_ptr<double>(new double(lmt->getDouble("Change")));
            if (lmt->hasValue("Operator", PlatformTypeEnum::PLAT_STR))
                op = std::shared_ptr<int>(new int(lmt->getInt("Operator")));
            cout << "fx: " << m[fxId] << endl;
            limit lmt_up = limit::Create(seed.get(), op.get(), chg.get());
            limits->SetLimit(fxId - 1, lmt_up);
            cout << endl;
        }
        limits->Populate();
    }
    return limits;
}

Limits_up LimitsProvider::Get(const XpndrClassEnum &xpndrClass)
{
    switch (xpndrClass)
    {
    case CLASS2SINGLE:
    {
        cout << "**************" << endl;
        cout << "Limits for Class II, Single antenna" << endl;
        cout << "**************" << endl;
        return getLimits(2);
    }        
    case CLASS1SINGLE:
    {
        cout << "**************" << endl;
        cout << "Limits for Class I, Single antenna" << endl;
        cout << "**************" << endl;
        return getLimits(3);
    }        
    case CLASS1DIVERSITY:
    {
        cout << "**************" << endl;
        cout << "Limits for Class I, diversity" << endl;
        cout << "**************" << endl;
        return getLimits(4);
    }
    case SIF:
    default:
    {
        cout << "**************" << endl;
        cout << "Limits for SIF" << endl;
        cout << "**************" << endl;
        return getLimits(1);
    }
    }
}