//
// Created by yuu on 2019-06-22.
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
    string s;
    cin>>s;

    bool flag = true;


    if(s[0] == s[1])flag = false;
    if(s[1] == s[2])flag = false;
    if(s[2] == s[3])flag = false;

    if(flag){
        cout<<"Good"<<endl;
    }else{
        cout<<"Bad"<<endl;
    }
    return 0;
}