//
// Created by yuu on 2019-08-18.
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
#include <iomanip>

using namespace std;

int A[110];
int main(void){
    int N;
    cin>>N;
    for (int i = 0; i < N; ++i) {
        cin>>A[i];
    }

    double temp = 0;

    for (int i = 0; i < N; ++i) {
        temp += 1.0 / A[i];
    }

    cout<<std::setprecision(10)<<1.0/temp<<endl;


    return 0;
}