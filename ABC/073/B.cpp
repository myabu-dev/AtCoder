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
    cin>>N;

    long long ans = 0;
    for (int i = 0; i < N; ++i) {
        int x,y;
        cin>>x>>y;
        
        ans += abs(x-y)+1;
    }
    
    cout<<ans<<endl;


    return 0;
}