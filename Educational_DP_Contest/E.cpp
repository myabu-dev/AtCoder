//
// Created by yuu on 2019-04-20.
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

const long long INF = 1LL<<60;

int main(void){
    int N,W;

    int w[110];
    int v[110];

    cin>>N>>W;

    for (int i = 0; i < N; ++i) {
        cin>>w[i]>>v[i];
    }

    long long dp[110][100100];

    for (int i = 0; i < 110; ++i) {
        for (int j = 0; j < 100100; ++j) {
            dp[i][j] = INF;
        }
    }
    dp[0][0] = 0;

    for (int i = 0; i < N; ++i) {
        for (int k = 0; k < 100100; ++k) {

            if(k-v[i] >= 0){
                dp[i+1][k] = min(dp[i+1][k], dp[i][k-v[i]] +  w[i]);
            }

            dp[1+i][k] = min(dp[i+1][k], dp[i][k]);
        }
    }

    long long ans = 0;

    for (int i = 0; i < 100100; ++i) {
        if(dp[N][i] <= W)ans = i;
    }
    
    cout<<ans<<endl;
    return 0;
}