//
// Created by Myabu on 2020/01/04.
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
    
    int count_0 = 0;
    int count_1 = 0;

    for (char i : S) {
        if(i == '0'){
            count_0 ++;
        }else{
            count_1 ++;
        }
    }

    cout<<min(count_0, count_1) * 2<<endl;


    return 0;
}