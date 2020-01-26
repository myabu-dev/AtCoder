//
// Created by Myabu on 2020/01/26.
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
#include <iomanip>

using namespace std;


int main(void){
    int N;
    int K;

    cin>>N>>K;

    vector<int> x(N);

    for (int i = 0; i < N; ++i) {
        cin>>x[i];
    }

    int ans = 0;
    for (int i = 0; i < N; ++i) {
        ans += 2 * min(x[i], abs(x[i] - K));
    }

    cout<<ans<<endl;
    return 0;
}