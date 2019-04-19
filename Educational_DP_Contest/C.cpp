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

using namespace std;


int main(void){

    int N;
    int A[100010][3];

    cin>>N;


    long long dp[100010][3] = {};

    for (int i = 0; i < N; ++i) {
        for(int j=0;j<3;j++){
            cin>>A[i][j];
        }
    }

    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < 3; ++j) {
            for (int k = 0; k < 3; ++k) {
                if(j==k)continue;
                dp[i+1][k] = max(dp[i+1][k], dp[i][j] + A[i][k]);
            }
        }
    }

    long long max=0;

    for (int l = 0; l < 3; ++l) {

        if(max<dp[N][l]){
            max = dp[N][l];
        }
    }

    cout<<max<<endl;

    return 0;
}