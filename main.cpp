#include <iostream>
#include "limitsprovider.h"
#include "dbcache.h"
#include "catalogue.h"
#include "master.h"

using namespace std;
#define UNUSED(x) (void)(x)
int main(int argc, char *argv[])
{
    UNUSED(argc);
    UNUSED(argv);

    DBCache::Select("limits", "limits.db");
    Master mstLimitsTbl("limits",
    {   {"Fxid", PLAT_INT},
        {"Cls", PLAT_INT},
        {"Seed", PLAT_DBL},
        {"Operator", PLAT_INT},
        {"Change", PLAT_DBL},
        {"Unit", PLAT_STR}
    });
    mstLimitsTbl
    .Add(1, 1, 18.5, 0, 8.5, "dBW")
    .Add(2, 1, NULVAL, 1, 1, "dB")
    .Add(3, 1, NULVAL, NULVAL, NULVAL, NULVAL)
    .Add(4, 1, NULVAL, 2, 3, "MHz")
    .Add(5, 1, NULVAL, NULVAL, NULVAL, NULVAL)
    .Add(6, 1, 0.45, 2, 0.1, "uS")
    .Add(7, 1, NULVAL, 2, 0.1, "uS")
    .Add(8, 1, 0.5, 2, 0.05, "uS")
    .Add(9, 1, NULVAL, 2, 0.05, "uS")
    .Add(10, 1, NULVAL, NULVAL, NULVAL, NULVAL)
    .Add(11, 1, 3, 2, 0.5, "uS")
    .Add(12, 1, NULVAL, 0, 0.2, "uS")
    .Add(13, 1, NULVAL, NULVAL, NULVAL, NULVAL)
    .Add(14, 1, NULVAL, 2, 0.1, "uS")
    .Add(15, 1, NULVAL, NULVAL, NULVAL, NULVAL)
    .Add(16, 1, -69, 1, 8, "dBm")
    .Add(17, 1, NULVAL, NULVAL, NULVAL, NULVAL)
    .Add(18, 1, NULVAL, 0, 1, "dB") 
    .Add(19, 1, NULVAL, 3, 0, NULVAL)
    .Add(20, 1, NULVAL, 3, -9, "dB")
    .Add(21, 1, NULVAL, NULVAL, NULVAL, NULVAL)
    .Add(22, 1, NULVAL, NULVAL, NULVAL, NULVAL)
    .Add(23, 1, NULVAL, 3, -1, "dB")
    .Add(24, 1, NULVAL, 3, -6, "dB")
    .Add(25, 1, NULVAL, 3, -1, "dB")
    .Add(26, 1, NULVAL, 3, -6, "dB")
    .Add(1, 2, 18.5, 0, 8.5, "dBW")
    .Add(2, 2, NULVAL, 1, 1, "dB")
    .Add(3, 2, NULVAL, 1, 2, "dB")
    .Add(4, 2, NULVAL, 2, 1, "MHz")
    .Add(5, 2, NULVAL, 2, 1, "MHz")
    .Add(6, 2, 0.45, 2, 1, "uS")
    .Add(7, 2, NULVAL, 2, 0.1, "uS")
    .Add(8, 2, 0.5, 2, 0.05, "uS")
    .Add(9, 2, NULVAL, 2, 0.05, "uS")
    .Add(10, 2, NULVAL, NULVAL, NULVAL, NULVAL)
    .Add(11, 2, 3, 2, 0.5, "uS")
    .Add(12, 2, NULVAL, 0, 0.2, "uS") 
    .Add(13, 2, 128, 2, 0.25, "uS")
    .Add(14, 2, NULVAL, 2, 0.1, "uS")
    .Add(15, 2, NULVAL, 2, 0.08, "uS")
    .Add(16, 2, -69, 1, 8, "dBm")
    .Add(17, 2, -71, 1, 6, "dBm")
    .Add(18, 2, NULVAL, 0, 1, "dB") 
    .Add(19, 2, NULVAL, 3, 0, NULVAL)
    .Add(20, 2, NULVAL, 3, -9, "dB")
    .Add(21, 2, NULVAL, 3, 3, "dB")
    .Add(22, 2, NULVAL, 3, -12, "dB")
    .Add(23, 2, NULVAL, 3, -1, "dB")
    .Add(24, 2, NULVAL, 3, -6, "dB")
    .Add(25, 2, NULVAL, NULVAL, NULVAL, NULVAL)
    .Add(26, 2, NULVAL, NULVAL, NULVAL, NULVAL)
    .Add(1, 3, 21, 0, 6, "dBW")
    .Add(2, 3, NULVAL, 1, 1, "dB")
    .Add(3, 3, NULVAL, 1, 2, "dB")
    .Add(4, 3, NULVAL, 2, 1, "MHz")
    .Add(5, 3, NULVAL, 2, 1, "MHz")
    .Add(6, 3, 0.45, 2, 1, "uS")
    .Add(7, 3, NULVAL, 2, 0.1, "uS")
    .Add(8, 3, 0.5, 2, 0.05, "uS")
    .Add(9, 3, NULVAL, 2, 0.05, "uS")
    .Add(10, 3, NULVAL, NULVAL, NULVAL, NULVAL)
    .Add(11, 3, 3, 2, 0.5, "uS")
    .Add(12, 3, NULVAL, 0, 0.2, "uS")
    .Add(13, 3, 128, 2, 0.25, "uS")
    .Add(14, 3, NULVAL, 2, 0.1, "uS")
    .Add(15, 3, NULVAL, 2, 0.08, "uS")
    .Add(16, 3, -69, 1, 8, "dBm")
    .Add(17, 3, -71, 1, 6, "dBm")
    .Add(18, 3, NULVAL, 0, 1, "dB") 
    .Add(19, 3, NULVAL, 3, 0, NULVAL)
    .Add(20, 3, NULVAL, 3, -9, "dB")
    .Add(21, 3, NULVAL, 3, 3, "dB")
    .Add(22, 3, NULVAL, 3, -12, "dB")
    .Add(23, 3, NULVAL, 3, -1, "dB")
    .Add(24, 3, NULVAL, 3, -6, "dB")
    .Add(25, 3, NULVAL, NULVAL, NULVAL, NULVAL)
    .Add(26, 3, NULVAL, NULVAL, NULVAL, NULVAL)
    .Add(1, 4, 21, 0, 6, "dBW")
    .Add(2, 4, NULVAL, 1, 1, "dB")
    .Add(3, 4, NULVAL, 1, 2, "dB")
    .Add(4, 4, NULVAL, 2, 1, "MHz")
    .Add(5, 4, NULVAL, 2, 1, "MHz")
    .Add(6, 4, 0.45, 2, 1, "uS")
    .Add(7, 4, NULVAL, 2, 0.1, "uS")
    .Add(8, 4, 0.5, 2, 0.05, "uS")
    .Add(9, 4, NULVAL, 2, 0.05, "uS")
    .Add(10, 4, NULVAL, 0, 20, "dB")
    .Add(11, 4, 3, 2, 0.5, "uS")
    .Add(12, 4, NULVAL, 0, 0.2, "uS")
    .Add(13, 4, 128, 2, 0.25, "uS")
    .Add(14, 4, NULVAL, 2, 0.1, "uS")
    .Add(15, 4, NULVAL, 2, 0.08, "uS")
    .Add(16, 4, -69, 1, 8, "dBm")
    .Add(17, 4, -71, 1, 6, "dBm")
    .Add(18, 4, NULVAL, 0, 1, "dB") 
    .Add(19, 4, NULVAL, 3, 0, NULVAL)
    .Add(20, 4, NULVAL, 3, -9, "dB")
    .Add(21, 4, NULVAL, 3, 3, "dB")
    .Add(22, 4, NULVAL, 3, -12, "dB")
    .Add(23, 4, NULVAL, 3, -1, "dB")
    .Add(24, 4, NULVAL, 3, -6, "dB")
    .Add(25, 4, NULVAL, NULVAL, NULVAL, NULVAL)
    .Add(26, 4, NULVAL, NULVAL, NULVAL, NULVAL);

    DBCache::Current().AddMaster(mstLimitsTbl);

    LimitsProvider *provider = LimitsProvider::Instance();

    Limits_up sif = provider->Get(XpndrClassEnum::SIF);

    // limit lmt = sif->getTxPwrDroopSifdB();

    Limits_up cls2Single = provider->Get(XpndrClassEnum::CLASS2SINGLE);
    Limits_up cls1Single = provider->Get(XpndrClassEnum::CLASS1SINGLE);
    Limits_up cls1Diversity = provider->Get(XpndrClassEnum::CLASS1DIVERSITY);


    auto limits = LimitsProvider::Instance()->Get(XpndrClassEnum::SIF);
    auto class2single = LimitsProvider::Instance()->Get(XpndrClassEnum::CLASS2SINGLE);
    auto class1single = LimitsProvider::Instance()->Get(XpndrClassEnum::CLASS1SINGLE);
    auto class1diversity = LimitsProvider::Instance()->Get(XpndrClassEnum::CLASS1DIVERSITY);
    // auto lmt = limits->getTxPwrDroopSifdB();

    // limit lmtTxPwrdBW = limits->getTxPwrdBW();
    // cout << lmtTxPwrdBW.min() << endl;
    // cout << lmtTxPwrdBW.max() << endl;

    // limit lmtTxFreqAccySifMHz = limits->getTxFreqAccySifMHz();
    // lmtTxFreqAccySifMHz.setSeed(100);
    // cout << lmtTxFreqAccySifMHz.min() << endl;
    // cout << lmtTxFreqAccySifMHz.max() << endl;

    

    cin.ignore();
    return 0;
}
