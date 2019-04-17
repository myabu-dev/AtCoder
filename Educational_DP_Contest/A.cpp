//
// Created by on 2019-04-17.
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


int main(void){
    int N;
    int H[100010];

    cin>>N;
    vector<long long> dp(N+10,1000000);

    for (int i = 0; i < N; ++i) {
        cin>>H[i];
    }

    dp[1] = abs(H[0] - H[1]);
    dp[2] = abs(H[0] - H[2]);
    for (int j = 1; j < N; ++j) {
        if(j+1 < N){
            dp[j+1] = min(dp[j+1], (dp[j] + abs(H[j] - H[j+1])));
        }

        if(j+2 < N){
            dp[j+2] = dp[j] + abs(H[j]-H[j+2]);
        }
    }

    cout<<dp[N-1]<<endl;

    return 0;
}