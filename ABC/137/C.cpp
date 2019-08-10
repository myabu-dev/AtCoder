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
string S[100010];


int main(void){
    int N;
    cin>>N;
    for (int i = 0; i < N; ++i) {
        cin>>S[i];
    }



    for (int i = 0; i < N; ++i) {
        sort(S[i].begin(), S[i].end());
    }

    long long ans=0;

    sort(S, S+N);


//    for (int j = 0; j < N; ++j) {
//        cout<<S[j]<<endl;
//    }


    long long  count = 1;
    string temp = S[0];
    for (int i = 1; i < N; ++i) {
        if(temp == S[i]){
            count++;
        }else{
            temp = S[i];
            if(count>1){
                ans += (count * (count-1)) / 2;
                count = 1;
            }
        }
    }

    if(count>1){
        ans += (count * (count-1)) / 2;
    }

    cout<<ans<<endl;

    return 0;
}