//
// Created by Myabu on 2020/01/26.
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
    long long r, D, x;

    cin>>r>>D>>x;

    for (int i = 0; i < 10; ++i) {
        x = r*x - D;
        cout<<x<<endl;
    }


    return 0;
}