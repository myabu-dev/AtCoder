//
// Created by yuu on 2019-04-27.
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


int main(void){
    int N;
    int C[100],V[100];

    cin>>N;

    for (int i = 0; i < N; ++i) {
        cin>>V[i];
    }

    for (int i = 0; i < N; ++i) {
        cin>>C[i];
    }

    int ans = 0;

    for (int i = 0; i < N; ++i) {
        if(V[i]-C[i]>0){
            ans += V[i]-C[i];
        }

    }

    cout<<ans<<endl;
    return 0;
}