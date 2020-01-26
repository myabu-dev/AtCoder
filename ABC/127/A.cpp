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
    int A,B;

    cin>>A>>B;

    if(A<=5){
        cout<<0<<endl;
    }else if(A<=12){
        cout<<B/2<<endl;
    }else{
        cout<<B<<endl;
    }


    return 0;
}