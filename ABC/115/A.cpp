//
// Created by Myabu on 2020/01/25.
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
    int D;
    cin>>D;

    if(D==25){
        cout<<"Christmas"<<endl;
    }else if(D==24){
        cout<<"Christmas Eve"<<endl;
    }else if(D==23){
        cout<<"Christmas Eve Eve"<<endl;
    }else{
        cout<<"Christmas Eve Eve Eve"<<endl;
    }


    return 0;
}