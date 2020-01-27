//
// Created by Myabu on 2020/01/27.
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
    int N;
    cin>>N;
    vector<string> s(N);
    map<string, int> a;
    for (int i = 0; i < N; ++i) {
        string temp;
        cin>>temp;
        a[temp] = a[temp]+1;
    }

    int M;
    cin>>M;
    for (int i = 0; i < M; ++i) {
        string temp;
        cin>>temp;
        a[temp] = a[temp]-1;
    }

    string ans_w ="";
    int max_val = 0;
    for(auto i: a){
        if(max_val < i.second){
            max_val = i.second;
            ans_w = i.first;
        }
    }

    cout<<max_val<<endl;

    return 0;
}