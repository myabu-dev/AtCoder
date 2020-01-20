//
// Created by Myabu on 2020/01/20.
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
    string S;
    cin>>S;

    if((S[0]==S[1] && S[1] == S[2] ) || (S[1] == S[2] && S[2] ==S[3])){
        cout<<"Yes"<<endl;
    }else{
        cout<<"No"<<endl;
    }


    return 0;
}