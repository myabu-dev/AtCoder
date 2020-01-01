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

using namespace std;

double V[60];
int main(void){
    int N;
    cin>>N;


    for (int i = 0; i < N; ++i) {
        cin>>V[i];
    }



    for (int i = 0; i < N-1; ++i) {
        sort(V, V+N);
        V[i+1] = (V[i] + V[i+1])/2.0;
        V[i] = - 1;
    }

//    for (int i = 0; i < N; ++i) {
//        cout<<V[i]<<endl;
//    }

    cout<<V[N-1]<<endl;
    return 0;
}