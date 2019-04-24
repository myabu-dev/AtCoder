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

    sort(test.begin(), test.begin()+N, [](const data& pre, const data& next){
        return pre.a < next.a;
    });

//    for (int i = 0; i < N; ++i) {
//        cout<<test[i].a<<"b is "<<test[i].b<<endl;
//    }

    long long ans = 0;
    for (int i = 0; i < N; ++i){

        while(test[i].b > 0){
            if(M==0){
                break;
            }
            M--;
            test[i].b --;
            ans += test[i].a;
        }
        if(M==0){
            break;
        }
    }

    cout<<ans<<endl;

    return 0;
}