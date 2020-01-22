//
// Created by Myabu on 2020/01/22.
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
    int a, b;
    cin>>a>>b;

    if((a+b)%2==0){
        cout<<(a+b)/2<<endl;
    }else{
        cout<<(a+b)/2+1<<endl;
    }


    return 0;
}