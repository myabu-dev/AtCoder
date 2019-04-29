//
// Created by yuu on 2019-04-29.
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
    int A,B,K;

    cin>>A>>B>>K;

    if(A<B){
        swap(A,B);
    }


    vector<int> div;
    for (int i = 1; i <=B; ++i) {
        if(A%i==0 && B%i==0){
            div.push_back(i);
        }
    }


    cout<<div[div.size()-K]<<endl;
    return 0;
}