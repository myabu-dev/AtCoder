//
// Created by yuu on 2019-05-01.
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

using namespace std;


int main(void){
    string s;
    cin>>s;

    int temp=0;
    int max=0;
    for (int i = 0; i < s.size(); ++i) {
        if(s[i]=='A' || s[i] == 'C' || s[i]=='G' || s[i]=='T'){
            temp++;
        }else{
            if(max < temp){
                max = temp;
            }
            temp = 0;
        }
    }
    if(max<temp){
        max = temp;
    }

    cout<<max<<endl;

    return 0;
}