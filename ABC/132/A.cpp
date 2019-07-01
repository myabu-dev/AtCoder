//
// Created by yuu on 2019-06-29.
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

    if(s[0]==s[1] && s[2]==s[3] && s[0] != s[2] && s[0] != s[3]){
        cout<<"Yes"<<endl;
        return 0;
    }else if(s[1]==s[2] && s[0]==s[3] && s[0] != s[1] && s[0] != s[2]){
        cout<<"Yes"<<endl;
        return 0;
    }else if(s[0]==s[2] && s[1]==s[3] && s[0] != s[1] && s[0] != s[3]) {
        cout<<"Yes"<<endl;
        return 0;
    }
    else{
        cout<<"No"<<endl;
        return 0;
    }



    return 0;
}