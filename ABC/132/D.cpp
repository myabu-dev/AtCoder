//
// Created by yuu on 2019-06-29.
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

int mod = 1000000007;

void comb(vector<vector <long long int> > &v){
    for(int i = 0;i <v.size(); i++){
        v[i][0]=1;
        v[i][i]=1;
    }
    for(int k = 1;k <v.size();k++){
        for(int j = 1;j<k;j++){
            v[k][j]=(v[k-1][j-1]+v[k-1][j]);
        }
    }
}

int main(void){
    int N,K;
//    cin>>N>>K;
    N=2000;
    vector<vector<long long int> > v(N+1,vector<long long int>(N+1,0));
    comb(v);

//    for (int i = 0; i < K; ++i) {
//        cout<<v[K][i]<<endl;
//    }

    cout<<v[2000][1997]%mod<<endl;
    return 0;
}