//
// Created by Myabu on 2020/01/23.
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
    int A,B,C,D;

    cin>>A>>B>>C>>D;

    if(A+B > C+D){
        cout<<"Left"<<endl;
    }else if(A+B == C+D) {
        cout<<"Balanced"<<endl;
    }else{
        cout<<"Right"<<endl;
    }

    return 0;
}