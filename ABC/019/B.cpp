//
// Created by yuu on 2019-06-30.
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

using namespace std;


int main(void){

    string s;
    cin>>s;

    string ans = "";
    for (int i = 0; i < s.length(); ++i) {
        int count = 1;
        for (int j = i+1; j < s.length(); ++j) {
            if(s[i]==s[j]){
                count ++;
            }else{
                break;
            }
        }
        ans += s[i];
        ans += to_string(count);
        i += (count -1);
    }

    cout<<ans<<endl;
    return 0;
}