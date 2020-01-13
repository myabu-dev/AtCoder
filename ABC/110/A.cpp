//
// Created by Myabu on 2020/01/12.
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
    int A, B, C;

    cin>>A>>B>>C;

    cout<<max(max(10*A+B+C, A+10*B+C), A+B+C*10)<<endl;

    return 0;
}