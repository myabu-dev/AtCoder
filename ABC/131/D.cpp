//
// Created by yuu on 2019-06-22.
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

bool compare_by_b(pair<int, int> a, pair<int, int> b) {
    if(a.second != b.second){
        return a.second < b.second;
    }else{
        return a.first < b.first;
    }
}



int main(void){
    int N;
    cin>>N;

    vector<pair<int, int>>jobs;
    for (int i = 0; i < N; ++i) {
        int a, b;
        cin>>a>>b;

        jobs.push_back(make_pair(a,b));
    }

    sort(jobs.begin(), jobs.end(), compare_by_b);

    int now_time = 0;
    int now_job = 0;

//    for (int i = 0; i < N; ++i) {
//        cout<<jobs[i].first<<" "<<jobs[i].second<<endl;
//    }

    while(1){
        if(now_job >= N){
            break;
        }

//        if(jobs[now_job - 1].second < now_time){
//            cout<<"No"<<endl;
//            return 0;
//        }
//
//        if(jobs[now_job].first == 0){
//            now_job ++;
//            continue;
//        }

        now_time += jobs[now_job].first;
        if(jobs[now_job].second < now_time){
            cout<<"No"<<endl;
            return 0;
        }
        now_job ++;
    }

    cout<<"Yes"<<endl;
    return 0;
}
