//
// Created by yuu on 2019-04-25.
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

using namespace std;


int main(void){

    int A,B;
    cin>>A>>B;
    if(A==1){
        A = 100;
    }
    if(B==1){
        B = 100;
    }

    if(A>B){
        cout<<"Alice"<<endl;
    }else if(B>A){
        cout<<"Bob"<<endl;
    }else{
        cout<<"Draw"<<endl;
    }
    return 0;
}