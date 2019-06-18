//
// Created by yuu on 2019-06-09.
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
    int N,K;
    cin>>N>>K;

    if(K==1){
        cout<<0<<endl;
        return 0;
    }

    cout<<(N-K)<<endl;


    return 0;
}