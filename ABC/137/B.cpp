//
// Created by yuu on 2019-08-10.
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


int main(void){
    int K,X;
    cin>>K>>X;

    if(K==1){
        cout<<X<<endl;
        return 0;
    }


    for (int i = 0; i < ((K-1)*2+1); ++i) {
        cout<<X - K+i+1<<" ";
    }

    cout<<endl;


    return 0;
}