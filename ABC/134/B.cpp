//
// Created by yuu on 2019-07-22.
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
    int N, D;
    cin>>N>>D;

    int kansi = D*2+1;

    if(N%kansi == 0){
        cout<<N/kansi<<endl;
        return 0;
    }else{
        cout<<N/kansi+1<<endl;
        return 0;
    }


    return 0;
}