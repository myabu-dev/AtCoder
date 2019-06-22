//
// Created by yuu on 2019-06-22.
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
    int N,L;

    cin>>N>>L;

    int sum = 0;

    for (int i = 0; i < N; ++i) {
        sum += L + (i+1) -1;
    }

    int saiteki;
    int min = 1000000000;
    for (int i = 0; i < N; ++i) {
        int temp = 0;
        for (int j = 0; j < N; ++j) {
            if(i==j){
                continue;
            }
            temp += L + (j+1) -1;
        }

        if(min > abs(sum - temp)) {
            min = abs(sum - temp);
            saiteki = temp;

        }
    }


    cout<<saiteki<<endl;

    return 0;
}