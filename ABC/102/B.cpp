//
// Created by Myabu on 2020/01/17.
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


int main(void){
    int N;
    int A[110];
    cin>>N;
    for (int i = 0; i < N; ++i) {
        cin>>A[i];
    }

    sort(A, A+N);

    cout<<abs(A[0]-A[N-1])<<endl;

    return 0;
}