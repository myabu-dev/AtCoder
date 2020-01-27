//
// Created by Myabu on 2020/01/27.
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
    int n,x;
    cin>>n>>x;

    cout<<min(n-x, x-1)<<endl;


    return 0;
}