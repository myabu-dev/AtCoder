//
// Created by Myabu on 2020/01/18.
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
    string S;
    cin>>S;


    int year = stoi(S.substr(0,5));
    int month = stoi(S.substr(5,7));
    int day = stoi(S.substr(8,10));
    if(year >= 2019){
        if(month > 4){
            cout<<"TBD"<<endl;
        }else{
            cout<<"Heisei"<<endl;
        }
    }else{
        cout<<"Heisei"<<endl;
    }


    return 0;
}