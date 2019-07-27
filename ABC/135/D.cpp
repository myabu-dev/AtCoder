//
// Created by yuu on 2019-07-27.
//

#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <map>
#include <utility>
#include <math.h>
#include <stack>
#include <queue>
#include <cstdio>

#include <boost/multiprecision/cpp_dec_float.hpp>
#include <boost/multiprecision/cpp_int.hpp>

using namespace std;

namespace mp = boost::multiprecision;
// 任意長整数型
using Bint = mp::cpp_int;
// 仮数部が1024ビットの浮動小数点数型(TLEしたら小さくする)
using Real = mp::number<mp::cpp_dec_float<1024>>;

int main(void){
    string S;
    cin>>S;

    Bint a = 13;
    Bint b = 0;

    Bint max = S.length() * 10;

    while(b<max){
        b += a;
        
    }
    cout <<<< endl;


    return 0;
}