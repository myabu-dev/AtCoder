//
// Created by Myabu on 2020/01/23.
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
    int N,A,B;

    cin>>N>>A>>B;
    int ans = 0;
    for (int i = 0; i <= N; ++i) {
        int hitoketa = i % 10;
        int jyuu = i % 100 / 10;
        int hyaku = i % 1000 / 100;
        int sen = i %10000 / 1000;
        int man = i % 100000 / 10000;

        int temp = hitoketa + jyuu + hyaku +sen + man;

        if(temp >= A && temp<=B){
            ans+=i;
        }
    }

    cout<<ans<<endl;

    return 0;
}