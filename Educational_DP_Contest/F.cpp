//
// Created by yuu on 2019-04-21.
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

using namespace std;
int dp[3100][3100] = {};


int main(void){
    string s;
    string t;

    cin>>s;

    cin>>t;




    for (int i = 0; i < s.size(); ++i) {
        for (int j = 0; j < t.size(); ++j) {
            if(s[i] == t[j]){
                dp[i+1][j+1] = max(dp[i+1][j+1] ,dp[i][j] + 1);
            }
            dp[i+1][j+1] = max( dp[i+1][j+1], dp[i][j+1]);
            dp[i+1][j+1] = max( dp[i+1][j+1], dp[i+1][j]);
        }
    }


    string ans = "";

    int i = (int)s.size();
    int j = (int)t.size();
    while(i > 0&& j > 0){

        if(dp[i][j] == dp[i-1][j]){
            i--;
        }else if(dp[i][j] == dp[i][j-1]){
            j--;
        }else{
            ans = s[i-1] + ans;
            i--;
            j--;
        }

    }

    cout<<ans<<endl;

    return 0;
}
