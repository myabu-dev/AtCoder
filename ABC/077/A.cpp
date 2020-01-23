//
// Created by Myabu on 2020/01/23.
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
    string A,B;

    cin>>A>>B;

    char temp = A[0];
    A[0] = A[2];
    A[2] = temp;

    if(A==B){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }


    return 0;
}