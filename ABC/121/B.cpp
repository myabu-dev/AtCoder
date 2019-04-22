//
// Created by yuu on 2019-04-22.
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
    int N,M,C;
    cin>>N>>M>>C;

    int B[30];
    int A[30][30];
    for (int i = 0; i <= N; ++i) {
        for (int j = 0; j < M; ++j) {
            if(i==0){
                cin>>B[j];
            }else{
                cin>>A[i][j];
            }
        }
    }

    int ans = 0;

    for (int i = 1; i <= N; ++i) {
        int temp = 0;
        for (int j = 0; j < M; ++j) {
            temp += B[j] * A[i][j];
        }
        if(temp + C > 0){
            ans ++;
        }
    }

    cout<<ans<<endl;


    return 0;
}