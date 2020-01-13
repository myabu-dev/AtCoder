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
    int a,b;

    cin>>a>>b;

    if(a%b != 0){
        cout<<(b-a%b)<<endl;
    }else{
        cout<<0<<endl;
    }


    return 0;
}