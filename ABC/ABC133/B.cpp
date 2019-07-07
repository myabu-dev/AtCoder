//
// Created by yuu on 2019-07-07.
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

using namespace std;

int X[100][100];
int main(void){
    int N,D;
    cin>>N>>D;

    for (int i = 0; i < N; ++i) {
        for (int k = 0; k < D; ++k) {
            cin>>X[i][k];
        }
    }

    int ans = 0;
    for (int i = 0; i+1 < N; ++i) {
        for (int j = i+1; j < N; ++j) {
            long temp = 0;
            for (int k = 0; k < D; ++k) {
                temp += pow(X[i][k] - X[j][k],2);
            }
            double temp_2;
            temp_2 = sqrt(temp);
            if(temp_2 == floor(temp_2)){
                ans++;
            }
        }
    }
cout<<ans<<endl;

    return 0;
}