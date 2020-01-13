//
// Created by Myabu on 2020/01/14.
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
    string a,b;
    cin>>a>>b;

    int c = stoi(a+b);
    for (int i = 0; i < 1000; ++i) {
        if(c==i*i){
            cout<<"Yes"<<endl;
            return 0;
        }
    }

    cout<<"No"<<endl;


    return 0;
}