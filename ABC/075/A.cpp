//
// Created by Myabu on 2020/01/25.
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
    int A,B,C;

    cin>>A>>B>>C;

    if(A==B){
        cout<<C<<endl;
    }else if(A==C){
        cout<<B<<endl;
    }else{
        cout<<A<<endl;
    }


    return 0;
}