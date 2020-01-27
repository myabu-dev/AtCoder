//
// Created by Myabu on 2020/01/27.
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
    int n;
    cin>>n;

    int ans = n;
    for (int i = 1; i < 100000; ++i) {
        for (int k = 1; k < 100000; ++k) {
            if(n<i*k)break;

            ans = min(abs(i-k)+abs(n-i*k), ans);
        }
    }


    cout<<ans<<endl;

    return 0;
}