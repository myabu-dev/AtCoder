//
// Created by Myabu on 2020/01/13.
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
    int N,M;

    cin>>N>>M;

    vector<bool> flag(M, true);

    for (int i = 0; i < N; ++i) {
        int K;
        cin>>K;
        vector<bool> temp_flag(M, false);
        for (int a = 0; a < K; ++a) {
            int temp;
            cin>>temp;
            temp_flag[temp-1] =true;
        }
        for (int b = 0; b < temp_flag.size(); ++b) {
            if(temp_flag[b]){

            }else{
                flag[b] = false;
            }
        }
    }

    int ans = 0;

    for (int i = 0; i < flag.size(); ++i) {
        if(flag[i]){
            ans++;
        }
    }

    cout<<ans<<endl;




    return 0;
}