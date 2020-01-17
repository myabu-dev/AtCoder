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

    int ans = 0;
    for(char c: S){
        if(c == '+'){
            ans++;
        }else{
            ans--;
        }
    }

    cout<<ans<<endl;


    return 0;
}