//
// Created by Myabu on 2020/01/19.
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
    int N;
    cin>>N;

    int ans = 0;

    for (int i = 0; i < N; ++i) {
        ans = max(ans, i * (N-i));
    }

    cout<<ans<<endl;



    return 0;
}