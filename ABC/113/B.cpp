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
    int N;
    int T,A;
    cin>>N>>T>>A;
    vector<double> H(N);

    for (int i = 0; i < N; ++i) {
        cin>>H[i];
        H[i] = T-H[i]*0.006;
    }

//    sort(H.begin(), H.end());

    double sa = 1000;
    int ans = -1;
    for (int i = 0; i < N; ++i) {
        if (abs(A - H[i]) < sa) {
            sa = abs(A - H[i]);
            ans = i + 1;
        }
    }

    cout<<ans<<endl;



    return 0;
}