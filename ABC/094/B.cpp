//
// Created by Myabu on 2020/01/30.
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


int main(void){
    int N,M,X;
    cin>>N>>M>>X;

    vector<int> A(M);

    for (int i = 0; i < M; ++i) {
        cin>>A[i];
    }

    sort(A.begin(), A.end());

    int left_cost = 0;
    int right_cost = 0;

    for (int i = 0; i < M; ++i) {
        if(A[i] > X){
            right_cost ++;
        }else if(A[i] < N){
            left_cost++;
        }
    }

    cout<<min(left_cost, right_cost)<<endl;

    return 0;
}