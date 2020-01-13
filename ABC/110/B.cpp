//
// Created by Myabu on 2020/01/12.
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

using namespace std;


int main(void){
    int N,M,X,Y;

    cin>>N>>M>>X>>Y;

    int x[110];
    int y[110];

    for (int i = 0; i < N; ++i) {
        cin>>x[i];
    }

    for (int i = 0; i < M; ++i) {
        cin>>y[i];
    }

    int x_max = x[0];
    for (int i = 0; i < N; ++i) {
        if(x_max < x[i]){
            x_max = x[i];
        }
    }

    int y_min = y[0];
    for (int i = 0; i < M; ++i) {
        if(y_min > y[i])y_min=y[i];
    }

    bool war=true;
    for (int i = -100; i < 101 ; ++i) {
        if(x_max < i && y_min >= i && X<i && Y>=i){
            war = false;
            break;
        }
    }

    if(war){
        cout<<"War"<<endl;
    }else{
        cout<<"No War"<<endl;
    }


    return 0;
}