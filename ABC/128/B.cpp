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
bool pair_compare_by_first(pair<string, int> left, pair<string, int> right) {
    if(left.first != right.first){
        return left.first < right.first;
    }else{
        return left.second > right.second;
    }
}

int main(void){
    int N;
    cin>>N;
    vector<pair<string, int> >X;

    map<string, int> dic;

    for (int i = 0; i < N; ++i) {
        string s;
        int p;
        cin>>s>>p;

        X.push_back(make_pair(s,p));
        dic[s+to_string(p)] = i+1;
    }

    sort(X.begin(), X.end(), pair_compare_by_first);


    for (int i = 0; i < N; ++i) {
        cout<<dic[X[i].first+to_string(X[i].second)]<<endl;
    }



    return 0;
}