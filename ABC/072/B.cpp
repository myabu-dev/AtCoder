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
    string s;
    cin>>s;

    string ans = "";

    for (int i = 0; i < s.length(); ++i) {
        if(i%2==0){
            ans += s[i];
        }
    }

    cout<<ans<<endl;


    return 0;
}