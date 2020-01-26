//
// Created by Myabu on 2020/01/26.
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
    int N,K;
    string S;
    cin>>N>>K;
    cin>>S;

    S[K-1] = S[K-1]+32;

//    cout<<(int)'A'-'a'<<endl;

    cout<<S<<endl;


    return 0;
}