//
// Created by yuu on 2019-08-04.
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
    int N;
    cin>>N;
    int ans=0;
    for (int i = 1; i <= N; ++i) {
        string A;
        A = to_string(i);
        if(A.length() %2 == 1){
            ans++;
        }
    }


    cout<<ans<<endl;


    return 0;
}