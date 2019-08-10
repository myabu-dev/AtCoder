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


int main(void){
    int A,B,C;
    cin>>A>>B>>C;


    if(B+C-A<0){
        cout<<0<<endl;
    } else{
        cout<<B+C-A<<endl;

    }

    return 0;
}