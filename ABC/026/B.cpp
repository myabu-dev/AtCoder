//
// Created by Myabu on 2020/01/19.
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

    int R[1010];

    for (int i = 0; i < N; ++i) {
        cin>>R[i];
    }

    sort(R, R+N, std::greater<int>());

    double ans = 0;

    for (int i = 0; i < N; ++i) {
        if(i % 2==0){
            ans += R[i] * R[i] * M_PI;
        }else{
            ans -= R[i] * R[i] * M_PI;
        }
    }
    std::cout<<std::fixed<<std::setprecision(10);
    cout<<ans<<endl;


    return 0;
}