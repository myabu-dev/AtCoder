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
    string S;
    
    cin>>S;

    int ans = 10000;
    for (int i = 0; i < S.length() - 2; ++i) {
        ans = min(ans, abs(753-stoi(S.substr(i,3))));
    }

    cout<<ans<<endl;
    
    
    return 0;
}