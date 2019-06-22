//
// Created by yuu on 2019-06-22.
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

using namespace std;

int gcd(int a, int b) {
    if (b == 0)
        return a;

    return gcd(a, a % b);
}

int lcm(int a, int b) {
    return a * b / gcd(a, b);
}


long long c_lcm(long a, long b){
    long long x = a *b;
    long long tmp, r;
    if(a<b){
        tmp = a;
        a = b;
        b = tmp;
    }

    /* ユークリッドの互除法 */
    r = a % b;
    while(r!=0){
        a = b;
        b = r;
        r = a % b;
    }

    return x/b;
}

int main(void){
    long long A,B;
    long C,D;

    cin>>A>>B>>C>>D;

    long cc = (B / C) - ((A-1) /C);
    long dd = (long)(B / D) - (long)((A-1) /D);

    long cd = (B / c_lcm(C,D)) - ((A-1) / c_lcm(C,D));

//    cout<<"cd"<<cc<<endl;
    cout<<(B-A+1) -(cc+dd-cd)<<endl;

//    cout<<"aa"<<c_lcm(6,8)<<endl;

    return 0;
}