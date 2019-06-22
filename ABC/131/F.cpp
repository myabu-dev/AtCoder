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

#define MAX 110
#define INF 1<<20

vector<pair<int, int>> adj[MAX];
int N, K;

bool dijkstra(int start){
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> PQ;
    int d[MAX];
    int check[MAX];
    for (int i = 0; i < N; ++i) {
        d[i] = INF;
        check[i] = -1;
    }

    d[0] = 0;
    check[0] = 0;
    PQ.push(make_pair(0, start));

    while(!PQ.empty()) {
        pair<int, int> f = PQ.top();
        PQ.pop();
        int u = f.second;
        check[u] = 1;

        //　取り出した値が最短でない場合
        if (d[u] < f.first)continue;

        for (int i = 0; i < adj[u].size(); ++i) {
            int v = adj[u][i].first;
            if (check[v] == 1)continue;

            if (d[v] > d[u] + adj[u][i].second) {
                d[v] = d[u] + adj[u][i].second;
                PQ.push(make_pair(d[v], v));
                check[v] = 0;
            }
        }

    }

    int flag = false;
    for (int i = 0; i < N; ++i) {
        if(d[i] <= 2){
            flag = true;
            return flag;
        }
    }
    return  flag;
}

int main(void){
    cin>>N>>K;

    for (int i = 0; i < N; ++i) {
        int v_1, v_2;
        cin>>v_1>>v_2;

        adj[v_1].push_back(make_pair(v_2,1));
    }

    int count = 0;
    for (int i = 0; i < N; ++i) {
        if(dijkstra(i)){
            count ++;
        }
    }

    for (int i = 0; i < N; ++i) {
        for (int k = 0; k < N; ++k) {
            if()
        }
    }

    if(count >= K){
        cout<<
    }

    return 0;
}