//
// Created by yuu on 2019-06-30.
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

int a[1010];
int main(void){
    int n;
    int X;
    cin>>n>>X;

    for (int i = 0; i < n; ++i) {
        cin>>a[i];
    }

    int ans = 0;
    for (int i = 0; i < n; ++i) {
        if(X & (1<<i)){
            ans+= a[i];
        }
    }

    cout<<ans<<endl;
    return 0;
}