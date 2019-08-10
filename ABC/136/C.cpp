//
// Created by yuu on 2019-08-04.
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

long long H[100010];
int main(void){
    int N;
    cin>>N;

    for (int i = 0; i < N; ++i) {
        cin>>H[i];
    }

    bool flag = true;

    for (int i = 0; i < N-1; ++i) {
        if(H[i+1]-H[i]>0){
            H[i+1]--;
        }
    }


    for (int i = 0; i < N-1; ++i) {
        if(H[i+1]-H[i]>=0){

        }else{
            flag = false;
            break;
        }
    }


    if(flag){
        cout<<"Yes"<<endl;
    }else{
        cout<<"No"<<endl;
    }

    return 0;
}