#include "fund.h"

int main(){

    // 用户对股票一无所知，买就行了
    Fund a = Fund();

    a.buyFund();
    a.sellFund();

    return 0;
}