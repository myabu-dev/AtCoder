//
// Created by Myabu on 2020/01/16.
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
    int N,K;

    cin>>N>>K;

    int ans = 1;
    for (int i = 0; i < N; ++i) {
        ans = min(ans+K, ans * 2);
    }

    cout<<ans<<endl;


    return 0;
}