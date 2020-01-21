//
// Created by Myabu on 2020/01/21.
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
    string S;
    cin>>A>>B>>S;

    bool flag = true;
    for (int i = 0; i < S.length(); ++i) {
        if(i<A){
            if(S[i] == '-'){
                flag = false;
                break;
            }
        }
        if(i==A){
            if(S[i] != '-'){
                flag = false;
                break;
            }
        }
        if(i>A){
            if(S[i] == '-'){
                flag = false;
                break;
            }
        }
    }

    if(flag){
        cout<<"Yes"<<endl;
    }else{
        cout<<"No"<<endl;
    }


    return 0;
}