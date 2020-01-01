//
// Created by Myabu on 2020/01/01.
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
    long long W, H, x, y;
    cin>>W>>H>>x>>y;

    if(x * 2 == W && y * 2 == H){
        cout<<double(W)*double(H)/2.0<<" "<<1;
    }else{
        cout<<double(W)*double(H)/2.0<<" "<<0;
    }

    return 0;
}