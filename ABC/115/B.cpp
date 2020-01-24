//
// Created by Myabu on 2020/01/25.
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
    cin>>N;

    vector<int> p(N);

    for (int i = 0; i < N; ++i) {
        cin>>p[i];
    }

    sort(p.begin(), p.end());

    int ans = 0;
    for (int i = 0; i < N-1; ++i) {
        ans += p[i];
    }

    ans += p[N-1]/2;

    cout<<ans<<endl;


    return 0;
}