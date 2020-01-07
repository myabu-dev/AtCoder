//
// Created by Myabu on 2020/01/07.
//

// 途中でもっと効率いい方法に気づいたので、２に変更
// 一応のこしておく

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
    int n;
    cin>>n;
    int v[10010];

    for (int i = 0; i < n; ++i) {
        cin>>v[i];
    }

    map<int, int> zero_count;
    map<int, int> one_count;

    for (int i = 0; i < n; ++i) {
        if(i%2==0){
            zero_count[v[i]] = zero_count[v[i]] + 1;
        }else{
            one_count[v[i]] = one_count[v[i]] + 1;
        }
    }

    int zero_max = 0;
    int zero_max_i = 0;

    for(auto itr=zero_count.begin(); itr != zero_count.end(); itr++){
        if(zero_max < itr->second){
            zero_max = itr->second;
            zero_max_i = itr->first;
        }
    }

    int one_max = 0;
    int one_max_i = 0;
    for(auto itr: one_count){
        if(one_max < itr.second){
            one_max = itr.second;
            one_max_i = itr.first;
        }
    }

    int count = 0;

    for (int i = 0; i < n; ++i) {
        if(i%2==0){
            if(zero_max_i != v[i]){
                count ++;
            }
        }else{
            if(one_max_i != v[i]){
                count ++;
            }
        }
    }


    cout<<count<<endl;

    return 0;
}