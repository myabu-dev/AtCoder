//
// Created by Myabu on 2020/01/23.
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
    long long N;
    cin>>N;

    long long ans = 1;

    for (int i = 1; i < N; ++i) {
        if(i*i <= N){
            ans = i*i;
        }else{
            break;
        }
    }

    cout<<ans<<endl;

    return 0;
}