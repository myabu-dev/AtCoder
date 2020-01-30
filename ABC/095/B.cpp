//
// Created by myabu on 2020/01/31.
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
    int N,X;
    cin>>N>>X;

    vector<int> m(N);
    for (int i = 0; i < N; ++i) {
        cin>>m[i];
    }

    sort(m.begin(), m.end());

    int ans = 0;
    for(auto i:m){
        X-=i;
        if(X<0){
            cout<<ans<<endl;
            return 0;
        }
        ans++;
    }

    while(1){
        X-=m[0];
        if(X<0){
            cout<<ans<<endl;
            return 0;
        }
        ans++;
    }


    return 0;
}