//
// Created by Myabu on 2020/01/14.
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

using namespace std;


int main(void){
    int N,A;

    cin>>N>>A;

    if(N%500-A <= 0){
        cout<<"Yes"<<endl;
    }else{
        cout<<"No"<<endl;
    }


    return 0;
}