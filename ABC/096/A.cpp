//
// Created by myabu on 2020/02/01.
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
    int a,b;

    cin>>a>>b;

//    int count = 0;
//    for (int i = 1; i <= a; ++i) {
//        for (int j = 1; j <= b; ++j) {
//            if(i==j)count++;
//        }
//    }
//
//    cout<<count<<endl;

//    cout<<min(a,b)<<endl;

    if(a>b)a--;
    cout<<a<<endl;

    return 0;
}