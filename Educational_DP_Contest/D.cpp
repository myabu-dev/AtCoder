//
// Created by yuu on 2019-04-19.
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
    int W;

    int vw[110][2];
    long long dp[110][100010]={};

    cin>>N>>W;

    for (int i = 0; i < N; ++i) {
        cin>>vw[i][1]>>vw[i][0];
    }

    for (int i = 0; i < N; ++i) {
        for (int weight = 0; weight <= W; ++weight) {

            if(weight - vw[i][1] >=0){
                dp[i+1][weight] = max(dp[i+1][weight], dp[i][weight - vw[i][1]] + vw[i][0]);
            }

            dp[i+1][weight] = max(dp[i+1][weight], dp[i][weight]);
        }
    }

    cout<<dp[N][W]<<endl;





    return 0;
}