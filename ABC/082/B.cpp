//
// Created by Myabu on 2020/01/22.
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
    string T;
    cin>>S>>T;

    sort(S.begin(),S.end());
    sort(T.begin(), T.end(), std::greater<int>());

//
//    cout<<S<<endl;
//    cout<<T<<endl;
    if(S<T){
        cout<<"Yes"<<endl;
    }else{
        cout<<"No"<<endl;
    }


    return 0;
}