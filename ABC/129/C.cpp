//
// Created by yuu on 2019-06-09.
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

#define MOD 1000000007


using namespace std;

int a[100010] = {};

int main(void){
    int N,M;
    cin>>N>>M;

    for (int i = 0; i < M; ++i) {
        int temp;
        cin>>temp;
        a[temp] = 1;
    }

    long long ans = 1;
    bool reached = true;

    for (int i = 0; i < N; ++i) {
        int temp = 0;
        if(a[i] == 1)continue;
        if(a[i+1] == 0){
            temp ++;
        }

        if(a[i+2] == 0 && i+2 <= N){
            temp ++;
        }

        ans = (ans * temp) ;
        ans = ans % 1000000007;

        if(temp == 0) {
            reached = false;
            break;
        }


    }

    if(reached){
        cout<<ans<<endl;

    }else{
        cout<<0<<endl;
    }

    return 0;
}