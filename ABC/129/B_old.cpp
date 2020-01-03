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

bool compare_by_b(pair<int, int> a, pair<int, int> b) {
    if(a.second != b.second){
        return a.second < b.second;
    }else{
        return a.first < b.first;
    }
}

bool compare_by_a(pair<int, int> a, pair<int, int> b) {
    if(a.first != b.first){
        return a.first < b.first;
    }else{
        return a.second < b.second;
    }
}
pair<int, int > xy;
vector<pair <int, int >> pairs;
map<pair<int, int>, int> freq_kousa;

vector<pair<int, int>> kousa;
vector<pair<int, int>> kousa_b;
map<pair<int, int>, int> freq_kousa_b;

int main(void){
    int N;
    cin>>N;




    for (int i = 0; i < N; ++i) {
        int x, y;
        cin>>x>>y;
        pairs.push_back(make_pair(x, y));
    }

    if(N==1){
        cout<<1<<endl;
        return 0;
    }




    sort(pairs.begin(), pairs.end(), compare_by_a);

    for (int i = N-1; i > 0; i--) {
        int first = pairs[i].first - pairs[i-1].first;
        int second= pairs[i].second - pairs[i-1].second;

        kousa.push_back(make_pair(first,second));
    }


    for (int i = 0; i < kousa.size(); ++i) {
        freq_kousa[kousa[i]] = 0;
    }

    for (int i = 0; i < kousa.size(); ++i) {
        freq_kousa[kousa[i]] = freq_kousa[kousa[i]] + 1;
    }
    int max_freq = freq_kousa[kousa[0]];
    xy = kousa[0];


    for (int i = kousa.size(); i >= 0; --i) {
        if(max_freq < freq_kousa[kousa[i]]) {
            max_freq = freq_kousa[kousa[i]];
            xy = kousa[i];
        }
    }
//    sort(kousa.begin(), kousa.end(), compare_by_a);

    int p = xy.first;
    int q = xy.second;

    int cost = 0;
    for (int i = N-1; i >= 0; i--) {
        if(i == N-1){
            cost ++;
        }else{
            if(pairs[i].first + p == pairs[i+1].first && pairs[i].second + q == pairs[i+1].second){
                continue;
            }else{
                cost++;
            }
        }
    }



    sort(pairs.begin(), pairs.end(), compare_by_b);

    for (int i = N-1; i > 0; i--) {

        int first = pairs[i].first - pairs[i-1].first;
        int second= pairs[i].second - pairs[i-1].second;

        kousa_b.push_back(make_pair(first,second));
    }


    for (int i = 0; i < kousa_b.size(); ++i) {
        freq_kousa_b[kousa_b[i]] = 0;
    }

    for (int i = 0; i < kousa_b.size(); ++i) {
        freq_kousa_b[kousa_b[i]] = freq_kousa_b[kousa_b[i]] + 1;
    }
    max_freq = freq_kousa_b[kousa_b[0]];
    xy = kousa_b[0];


    for (int i = kousa_b.size(); i >= 0; --i) {
        if(max_freq < freq_kousa_b[kousa_b[i]]) {
            max_freq = freq_kousa_b[kousa_b[i]];
            xy = kousa_b[i];
        }
    }
//    sort(kousa.begin(), kousa.end(), compare_by_a);

    p = xy.first;
    q = xy.second;

    int cost_b = 0;
    for (int i = N-1; i >= 0; i--) {
        if(i == N-1){
            cost_b ++;
        }else{
            if(pairs[i].first + p == pairs[i+1].first && pairs[i].second + q == pairs[i+1].second){
                continue;
            }else{
                cost_b++;
            }
        }
    }




    cout<<min(cost_b, cost)<<endl;
    return 0;
}