//
// Created by Myabu on 2020/01/03.
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
#include <numeric>

using namespace std;


int main(void){
    int N;
    cin>>N;

    int W[110];
    for (int i = 0; i < N; ++i) {
        cin>>W[i];
    }

    int sum = accumulate(W, W+N, 0);
    int z_sum = 0;
    int ans = sum;
    for (int i = 0; i < N; ++i) {
        sum -= W[i];
        z_sum += W[i];
        ans = min(ans, abs(sum-z_sum));
    }

    cout<<ans<<endl;

    return 0;
}