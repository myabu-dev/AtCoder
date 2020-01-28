//
// Created by Myabu on 2020/01/28.
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
    int N;
    cin>>N;

    int D,X;
    cin>>D>>X;

    vector<int> A(N);

    for (int i = 0; i < N; ++i) {
        cin>>A[i];
    }

    int used = 0;
    for (int i = 0; i < N; ++i) {
        used += (D-1) / A[i] + 1;
    }

    cout<<used+X<<endl;


    return 0;
}