//
// Created by myabu on 2020/02/02.
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
    int X;
    cin>>X;

    int ans = 1;
    for (int i = 1; i < 1000; ++i) {
        for (int k = 2; k < 1000; ++k) {
            int temp = pow(i,k);
            if(temp > X){
                break;
            }
            ans = max(ans, temp);
        }
    }
    cout<<ans<<endl;


    return 0;
}