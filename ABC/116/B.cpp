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
    int s;
    cin>>s;

    vector<int> a;
    a.push_back(s);
    for (int i = 1; i <= 1000000; ++i) {
        if(a[i-1]%2==0){
            a.push_back(a[i-1]/2);
        }else{
            a.push_back(a[i-1] * 3 + 1);
        }
    }

    for (int i = 0; i < 1000000; ++i) {
        for (int k = i+1; k < 1000000; ++k) {
            if(a[i] == a[k]){
                cout<<k+1<<endl;
                return 0;
            }
        }
    }


    return 0;
}