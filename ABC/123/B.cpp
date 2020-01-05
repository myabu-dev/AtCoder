//
// Created by Myabu on 2020/01/05.
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


int main(void){
    int X[5];

    for (int i = 0; i < 5; ++i) {
        cin>>X[i];
    }

    int amari = 100;
    int min_index = -1;
    for (int i = 0; i < 5; ++i) {
        int a = X[i] % 10;
        if(a != 0){
            if(amari > a){
                amari = a;
                min_index = i;
            }

        }
    }

    int ans = 0;
    for (int i = 0; i < 5; ++i) {
        if(min_index != -1 && i == min_index){
            ans += X[i];
        }else{
            int a = X[i] % 10;
            if(a!=0){
                ans += X[i] + 10 - a;
            }else{
                ans += X[i];
            }
        }
    }

    cout<<ans<<endl;

    return 0;
}