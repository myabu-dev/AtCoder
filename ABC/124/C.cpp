//
// Created by yuu on 2019-04-13.
//

#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <map>
#include <utility>
#include <cstdlib>
#include <typeinfo>


using namespace std;


int main(void){
    string str;
    cin>>str;

    int ans1 = 0;
    int ans2 = 0;

    int zero_one[100010] = {};
    int one_zero[100010] = {};

    for (int i = 0; i < 100010; ++i) {
        if(i%2==0){
            one_zero[i]=1;
        }else{
            zero_one[i]=1;
        }
    }

    for (int j = 0; j < str.length(); ++j) {
        if(one_zero[j] != (int)(str[j]-'0')) {
            ans1++;
        }else{
            ans2++;
        }
    }

    cout<<min(ans1,ans2)<<endl;

    return 0;
}