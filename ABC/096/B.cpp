//
// Created by myabu on 2020/02/01.
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
    int X[3];
    int K;
    cin>>X[0]>>X[1]>>X[2]>>K;

    sort(X, X+3);

    for (int i = 0; i < K; ++i) {
        X[2] *= 2;
    }

    cout<<X[0]+X[1]+X[2]<<endl;


    return 0;
}