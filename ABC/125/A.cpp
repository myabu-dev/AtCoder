//
// Created by yuu on 2019-04-16.
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
    int A[5];
    for (int i = 0; i < 5; ++i) {
        cin>>A[i];
    }
    int K;
    cin>>K;

    sort(A,A+5);

    if(A[4]-A[0] > K){
        cout<<":("<<endl;
    }else{
        cout<<"Yay!"<<endl;
    }

    return 0;

}