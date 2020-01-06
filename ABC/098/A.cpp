//
// Created by Myabu on 2020/01/06.
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

using namespace std;


int main(void){
    int A, B;

    cin>>A>>B;

    int ans;
    ans = max(A+B, A-B);
    ans = max (ans, A*B);

    cout<<ans<<endl;


    return 0;
}

