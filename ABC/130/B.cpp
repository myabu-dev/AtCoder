//
// Created by Myabu on 2020/01/01.
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


int main(void){
    int N, X;
    cin>>N>>X;

    int L[110];
    for (int i = 0; i < N; ++i) {
        cin>>L[i];
    }

    int D = 0;
    int ans = 0;
    for (int i = 0; i < N; ++i) {
        if(D<=X){
            ans++;
        }
        D += L[i];
    }

    if(D<=X){
        ans++;
    }
    cout<<ans<<endl;
    return 0;
}