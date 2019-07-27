//
// Created by yuu on 2019-07-27.
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

    int N;
    cin>>N;
    int p_1[55];
    int p_2[55];

    for (int i = 0; i < N; ++i) {
        int a;
        cin>>a;
        p_1[i] =a;
        p_2[i] =a;
    }

    sort(p_1, p_1+N);

    int count = 0;

    for (int i = 0; i < N; ++i) {
        if(p_1[i] != p_2[i]){
            count++;
        }
    }


    if(count<=2){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }



    return 0;
}