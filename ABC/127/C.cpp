//
// Created by myabu on 2020/02/03.
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
    int N,M;
    cin>>N>>M;

    vector<int> L(M);
    vector<int> R(M);

    for (int i = 0; i < M; ++i) {
        cin>>L[i]>>R[i];
    }

    int ans = 0;
//    for (int i = 1; i <= N; ++i) {
//        bool tuuka = true;
//        for (int k = 0; k < M; ++k) {
//            if(!(L[k] <= i && i<=R[k])){
//                tuuka = false;
//                break;
//            }
//        }
//        if(tuuka)ans++;
//    }
//
//

    sort(L.begin(), L.end());
    sort(R.begin(), R.end());

    for (int i = 1; i <= N; ++i) {
        if(L[M-1] <= i && R[0] >= i)ans++;
    }
    cout<<ans<<endl;

    return 0;
}