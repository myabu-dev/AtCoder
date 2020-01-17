//
// Created by Myabu on 2020/01/18.
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

using namespace std;


int main(void){
    string S;
    cin>>S;

    int sum_n = 0;
    for (int i = 0; i < S.length(); ++i) {
        sum_n += S[i] - '0';
    }

    if(stoi(S) % sum_n  == 0){
        cout<<"Yes"<<endl;
    }else{
        cout<<"No"<<endl;
    }


    return 0;
}