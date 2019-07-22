//
// Created by yuu on 2019-07-07.
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
    long L,R;
    cin>>L>>R;

    if(R-L>100010){
        cout<<0<<endl;
        return 0;
    }

    int min = 5000;
    for (long i = L; i <= R; ++i) {
        for (long j = i+1; j <= R; ++j) {
            int temp = i*j%2019;
            if(temp< min){
                min = temp;
            }
        }
    }

    cout<<min<<endl;

    return 0;
}