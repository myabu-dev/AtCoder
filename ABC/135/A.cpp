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
    int A,B;
    cin>>A>>B;

    int C;
    if(A>B){
        swap(A,B);
    }


    C = B-A;

    if(C%2!=0){
        cout<<"IMPOSSIBLE"<<endl;
    }else{
        C = C/2;
        cout<<A+C<<endl;
    }



    return 0;
}