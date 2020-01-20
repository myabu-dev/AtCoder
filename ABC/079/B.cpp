//
// Created by Myabu on 2020/01/20.
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
    long long N;
    cin>>N;

    long long even = 2;
    long long odd = 1;

    for (int i = 0; i < N; ++i) {
        if(i%2==0){
            even = even + odd;
        }else{
            odd = odd + even;
        }
    }

    if(N%2 == 0){
        cout<<even<<endl;
    }else{
        cout<<odd<<endl;
    }



    return 0;
}