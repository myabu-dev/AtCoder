//
// Created by yuu on 2019-04-18.
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
#define INF (1LL<<60)

using namespace std;


int main(void){
    int N,K;

    cin>>N>>K;

    int H[100110];
    for (int i = 0; i < N; ++i) {
        cin>>H[i];
    }
    vector <long long>dp(100110, INF);

    dp[0] = 0;

    for (int j = 0; j < N; ++j) {
        for (int i = 1; i <= K; ++i) {
            dp[j+i] = min(dp[j+i], (dp[j] + abs(H[j+i] - H[j])));
        }
    }

    cout<<dp[N-1]<<endl;

    return 0;
}