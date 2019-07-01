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


int main(void){
    int N;
    cin>>N;

    vector<int> d;

    for (int i = 0; i < N; ++i) {
        int a;
        cin>>a;
        d.push_back(a);
    }

    sort(d.begin(), d.end());
//
//    for (int i = 0; i < N; ++i) {
//        cout<<d[i]<<endl;
//    }
    int middle;
    if(N%2==0){
        middle = N/2-1;
//        if(d[middle-1] == d[middle] || d[middle+1] == d[middle]){
//            cout<<0<<endl;
//            return 0;
//        }
        int sa;
        sa = d[middle+1] - d[middle];

        cout<<sa<<endl;


    }else{
        middle = N/2;
        if(d[middle-1] == d[middle] || d[middle+1] == d[middle]){
            cout<<0<<endl;
        }else{
            cout<<1<<endl;
        }
    }

    return 0;
}