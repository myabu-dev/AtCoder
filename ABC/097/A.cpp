//
// Created by myabu on 2020/02/02.
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
    int  a,b,c,d;

    cin>>a>>b>>c>>d;

    if(abs(a-c)<=d){
        cout<<"Yes"<<endl;
    }else if(abs(a-b) <= d && abs(b-c) <= d){
        cout<<"Yes"<<endl;
    }else{
        cout<<"No"<<endl;
    }

    return 0;
}