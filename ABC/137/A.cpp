//
// Created by yuu on 2019-08-10.
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
    int A,B;
    cin>>A>>B;

    int temp = A - B;

    if(temp < A*B){temp = A*B;}

    if(temp < A+B)temp = A+B;



    cout<<temp<<endl;



    return 0;
}
