//
// Created by yuu on 2019-07-27.
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

int A[100010];
int B[100010];
int main(void){
    int N;
    cin >>N;

    for (int i = 0; i <= N; ++i) {
        cin>>A[i];

    }

    for (int i = 0; i < N; ++i) {
        cin>>B[i];
    }

    long long e_count = 0;

    for (int i = 0; i < N; ++i) {
        if(B[i]>=A[i]){
            e_count += A[i];
            B[i] -= A[i];
            if(B[i]>=A[i+1]){
                e_count += A[i+1];
                A[i+1] = 0;
            }else{
                e_count += B[i];
                A[i+1] -= B[i];
            }
        }else{
            e_count += B[i];
        }
    }


    cout<<e_count<<endl;

    return 0;
}