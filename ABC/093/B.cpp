//
// Created by Myabu on 2020/01/29.
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
    int A,B,K;

    cin>>A>>B>>K;

    for (int i = A; i <=B ; ++i) {
        if((A+K > i && A<=i)  || (B-K < i && B>=i)){
            cout<<i<<endl;
        }
    }


    return 0;
}