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
    string X,Y;
    cin>>X>>Y;


    if(X>Y){
        cout<<">"<<endl;
    }else if(X<Y){
        cout<<"<"<<endl;
    }else{
        cout<<"="<<endl;
    }


    return 0;
}