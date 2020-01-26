//
// Created by Myabu on 2020/01/27.
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
    int A, B;

    cin>>A>>B;

    int ans = 0;
    for (int i = A; i <= B; ++i) {
        string X = to_string(i);
        string Y = X;
        reverse(Y.begin(), Y.end());

        if(X == Y){
            ans ++;
        }
    }

    cout<<ans<<endl;


    return 0;
}