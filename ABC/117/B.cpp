//
// Created by Myabu on 2020/01/25.
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
    vector<int> L(N);

    for (int i = 0; i < N; ++i) {
        cin>>L[i];
    }
    sort(L.begin(), L.end());

    int sum =0;
    for (int i = 0; i < N - 1; ++i) {
        sum += L[i];
//        cout<<L[i]<<endl;
    }

//    cout<<sum<<endl;

    if(L[N-1] < sum){
        cout<<"Yes"<<endl;
    }else{
        cout<<"No"<<endl;
    }


    return 0;
}