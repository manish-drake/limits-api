#include <iostream>
#include "limitsprovider.h"

using namespace std;
#define UNUSED(x) (void)(x)
int main(int argc, char* argv[]){
    UNUSED(argc);
    UNUSED(argv);

    auto limits = LimitsProvider::Instance()->Get(XpndrClassEnum::CLASS1SINGLE);
    cout << limits->getTxPwrdBW().min() << endl;
    
    cin.ignore();
    return 0;
}
