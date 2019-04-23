//
// Created by yuu on 2019-04-23.
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

using namespace std;

struct data{
    int a;
    int b;
};


int main(void){
    int N,M;

    cin>>N>>M;

    vector<data>test(100100);


    for (int i = 0; i < N; ++i) {
        cin>>test[i].a>>test[i].b;
    }

    sort(test.begin(), test.end(), [](const data& pre, const data& next){
        return pre.a < next.a;
    });

    int ans = 0;
    for (int i = 0; i < N; ++i){
        if(N<=0){
            break;
        }
        ans += test[i]
    }


    return 0;
}