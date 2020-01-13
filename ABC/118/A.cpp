//
// Created by Myabu on 2020/01/13.
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
    int A,B;

    cin>>A>>B;

    if(B%A==0){
        cout<<A+B<<endl;
    }else{
        cout<<B-A<<endl;
    }


    return 0;
}