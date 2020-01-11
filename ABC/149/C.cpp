//
// Created by Myabu on 2020/01/11.
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
#include <numeric>

using namespace std;

bool is_prime(int n){
    if(n < 2 )return false;
    if(n == 2 || n == 3)return true;

    if(n%2 == 0) return false;
    if(n%3 == 0) return false;

    for(int i = 5; i * i <= n; i += 6){
        if(n%i == 0) return false;
        if(n%(i+2) == 0) return false;
    }
    return true;
}


int main(void){
    int X;
    cin>>X;

    while(1){
        if(is_prime(X)){
            cout<<X<<endl;
            return 0;
        }
        X++;
    }
}