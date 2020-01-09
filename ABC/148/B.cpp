//
// Created by Myabu on 2020/01/09.
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
    int N;
    string S, T;
    
    cin>>N>>S>>T;

    for (int i = 0; i < N; ++i) {
        cout<<S[i]<<T[i];
    }
    cout<<endl;
    
    return 0;
}