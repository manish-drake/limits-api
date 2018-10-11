#include <iostream>
#include "limitsprovider.h"

using namespace std;
#define UNUSED(x) (void)(x)
int main(int argc, char* argv[]){
    UNUSED(argc);
    UNUSED(argv);

    auto limits = LimitsProvider::Instance()->Get(XpndrClassEnum::SIF);
    cout << limits->getTxPwrDbW().min() << endl;
    
    cin.ignore();
    return 0;
}
