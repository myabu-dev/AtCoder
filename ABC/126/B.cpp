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
    string S;

    cin>>S;

    bool yymm = false;
    bool mmyy = false;
    if(stoi(S.substr(0,2)) <= 12 && stoi(S.substr(0,2)) > 0){
        mmyy = true;
    }

    if(stoi(S.substr(2,2)) <= 12 && stoi(S.substr(2,2)) > 0) {
        yymm = true;
    }


    if(mmyy && yymm){
        cout<<"AMBIGUOUS"<<endl;
    }else if(mmyy){
        cout<<"MMYY"<<endl;
    }else if(yymm){
        cout<<"YYMM"<<endl;
    }else{
        cout<<"NA"<<endl;
    }



        return 0;
}