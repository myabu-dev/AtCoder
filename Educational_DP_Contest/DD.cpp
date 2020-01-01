//
// Created by yuu on 2019-08-18.
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
struct UnionFind {
    vector<int> par; // par[i]:iの親の番号　(例) par[3] = 2 : 3の親が2

    UnionFind(int N) : par(N) { //最初は全てが根であるとして初期化
        for(int i = 0; i < N; i++) par[i] = i;
    }

    int root(int x) { // データxが属する木の根を再帰で得る：root(x) = {xの木の根}
        if (par[x] == x) return x;
        return par[x] = root(par[x]);
    }

    bool belong(int x, int y){
        if (par[x] == x) return false ;
        if (par[x] == y) return true;

        return belong(par[x], y);
    }

    void unite(int x, int y) { // xとyの木を併合
        int rx = root(x); //xの根をrx
        int ry = root(y); //yの根をry
        if (rx == ry) return; //xとyの根が同じ(=同じ木にある)時はそのまま
        par[rx] = ry; //xとyの根が同じでない(=同じ木にない)時：xの根rxをyの根ryにつける
    }

    bool same(int x, int y) { // 2つのデータx, yが属する木が同じならtrueを返す
        int rx = root(x);
        int ry = root(y);
        return rx == ry;
    }
};

int main(void){
    int N,Q;
    cin>>N>>Q;

    UnionFind tree(N);

    vector<int>point;
    for (int i = 0; i < N-1; ++i) {
        int a,b;
        cin>>a>>b;
        tree.unite(b,a);
        point.push_back(0);
    }
    point.push_back(0);

    cout<<tree.par[3]<<endl;
    cout<<tree.belong(3,2)<<endl;
    for (int i = 0; i < Q; ++i) {
        int r,p;
        cin>>r>>p;
        for (int k = 0; k < N; ++k) {
            if(tree.belong(k+1,r)){
                point[k] += p;
            }
        }
    }

    for (int i = 0; i < point.size(); ++i) {
        cout<<point[i]<<" ";
    }
    cout<<endl;

    return 0;
}