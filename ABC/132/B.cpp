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
    int n;
    cin>>n;

    int p[100];
    for (int i = 0; i < n; ++i) {
        cin>>p[i];
    }

    int count = 0;

    for (int i = 0; i < n-2; ++i) {
        if((p[i]<p[i+1] && p[i+1]<p[i+2])|| (p[i]>p[i+1] && p[i+1] > p[i+2])){
            count++;
        }
    }

    cout<<count<<endl;

    return 0;
}