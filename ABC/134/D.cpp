//
// Created by yuu on 2019-07-22.
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

vector<int> sosu;
int A[200010];
vector<int> ans;
int main(void){
    int N;
    cin>>N;

    for (int i = 0; i < N; ++i) {
        cin>>A[i+1];
    }

    sosu.push_back(1);
    sosu.push_back(2);
    for(int i=3;i<=N;i+=2)
    {
        int k=0;
        for(int j=3;j<=sqrt(i);j+=2)
        {
            if(i%j==0)
            {
                k=1;
                break;
            }
        }

        if(k==0) sosu.push_back(i);
    }


    for (int i = 0; i < sosu.size(); ++i) {
        int one_cnt=0;
        for (int k = sosu[i]; k <= N; k+=sosu[i]) {

            if(A[k] == 1){
                one_cnt++;
            }
        }
        if(one_cnt % 2 == 0){
            if(one_cnt == 0){
                continue;
            }else{
                cout<<-1<<endl;
                return 0;
            }
        }

        for (int kk = sosu[i]; kk <= N; kk+=sosu[i]) {

            if(A[kk] == 1){
                ans.push_back(kk);
            }
        }

    }


    cout<<ans.size()<<endl;
    if(ans.size() > 0){
        for (int i = 0; i < ans.size(); ++i) {
            if(i==0){
                cout<<ans[i];
            }else{
                cout<<" "<<ans[i];
            }
        }
        cout<<endl;
    }


    return 0;
}