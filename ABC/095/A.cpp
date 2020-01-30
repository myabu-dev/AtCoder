//
// Created by myabu on 2020/01/31.
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
    cin>>S;

    int ans = 700;

    for (int i = 0; i < S.length(); ++i) {
        if(S[i] == 'o'){
            ans += 100;
        }
    }

    cout<<ans<<endl;

    return 0;
}