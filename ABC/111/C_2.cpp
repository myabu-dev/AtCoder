//
// Created by Myabu on 2020/01/07.
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
bool pair_compare_by_second(pair<int, int> left, pair<int, int> right) {
    if(left.second != right.second){
        return left.second > right.second;
    }else{
        return left.first > right.first;
    }
}
int main(void){
    int n;
    cin>>n;

    int v[100010];
    for (int i = 0; i < n; ++i) {
        cin>>v[i];
    }

    vector<pair<int, int> > zero_count;
    vector<pair<int, int> > one_count;

    map<int, int> zero_map;
    map<int, int> one_map;

    for (int i = 0; i < n; ++i) {
        if(i%2==0){
            zero_map[v[i]] = zero_map[v[i]] + 1;
        }else{
            one_map[v[i]] = one_map[v[i]] + 1;
        }
    }

    for (auto itr : zero_map) {
        zero_count.push_back(make_pair(itr.first, itr.second));
    }

    for (auto itr : one_map) {
        one_count.push_back(make_pair(itr.first, itr.second));
    }

    zero_count.push_back(make_pair(-10,-10));
    one_count.push_back(make_pair(-10,-10));
    sort(zero_count.begin(), zero_count.end(), pair_compare_by_second);
    sort(one_count.begin(), one_count.end(), pair_compare_by_second);

    int zero, one;

    if(zero_count[0].first  == one_count[0].first){
        zero = zero_count[0].first;
        one = one_count[1].first;
        int temp_1 = 0;
        for (int i = 0; i < n; ++i) {
            if(i%2==0){
                if(zero != v[i]){
                    temp_1 ++;
                }
            }else{
                if(one != v[i]){
                    temp_1 ++;
                }
            }
        }

        zero = zero_count[1].first;
        one = one_count[0].first;
        int temp_2 = 0;
        for (int i = 0; i < n; ++i) {
            if (i % 2 == 0) {
                if (zero != v[i]) {
                    temp_2++;
                }
            } else {
                if (one != v[i]) {
                    temp_2++;
                }
            }
        }

        cout<<min(temp_1,temp_2)<<endl;
        return 0;

    }else{
        zero = zero_count[0].first;
        one = one_count[0].first;
    }
//    cout<<zero<<one<<endl;
    int count = 0;
    for (int i = 0; i < n; ++i) {
        if (i % 2 == 0) {
            if (zero != v[i]) {
                count++;
            }
        } else {
            if (one != v[i]) {
                count++;
            }
        }
    }


    cout<<count<<endl;

    return 0;
}