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

int L[100010];
int R[100010];

int retu[100010];

int main(void){
    int N, Q;
    cin>>N>>Q;
    string S;
    cin>>S;

    for (int i = 0; i < Q; ++i) {
        cin>>L[i]>>R[i];
    }

    retu[0] = 0;
    for (int i = 0; i < N-1; ++i) {
        if(S[i]=='A' && S[i+1]=='C'){
            retu[i+1] = retu[i] + 1;
        }else{
            retu[i+1] = retu[i];
        }
    }

    for (int i = 0; i < Q; ++i) {
//        int count = 0;
//        for (int k = 0; k < R[i]-L[i]; ++k) {
//            if(S[L[i]+k-1]=='A' && S[L[i]+k]=='C'){
//                count++;
//            }
//        }

//        cout<<count<<endl;
        cout<<retu[R[i]-1]-retu[L[i]-1]<<endl;
    }

//    for (int i = 0; i < N; ++i) {
//        cout<<retu[i]<<endl;
//    }


    return 0;
}

