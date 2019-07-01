//
// Created by yuu on 2019-06-30.
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

using namespace std;

int main(void){
    string s;
    cin>>s;
    int N;
    cin>>N;

    vector<pair<int,int>>lt;

    for (int i = 0; i < N; ++i) {
        int l,t;
        cin>>l>>t;
        lt.push_back(make_pair(l,t));
    }

    for (int i = 0; i < N; ++i) {
        char temp[110];
        for (int L = 0; L < lt[i].second - lt[i].first + 1; ++L) {
            temp[L] = s[lt[i].first + L - 1];
        }
        for (int K = 0; K < lt[i].second - lt[i].first + 1; ++K) {
            s[lt[i].first + K -1 ] = temp[lt[i].second - lt[i].first- K];
        }
    }

    cout<<s<<endl;


    return 0;
}