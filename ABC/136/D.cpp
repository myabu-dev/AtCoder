//
// Created by yuu on 2019-08-04.
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

int ANS[100010] ={};
int main(void){
    string S;
    cin>>S;

    int rihgt_count = 0;
    for (int i = 0; i < S.length(); ++i) {
        if(S[i]=='R'){
            rihgt_count++;
        }else{
            if(rihgt_count>0){
                if(rihgt_count%2==0){
                    ANS[i-1] += rihgt_count/2;
                    ANS[i] += rihgt_count/2;
                }else{
                    ANS[i-1] += rihgt_count/2 +1;
                    ANS[i] += rihgt_count/2;
                }
                rihgt_count = 0;
            }
        }
    }

    int left_count;
    for (int i = S.length()-1; i >=0; --i) {
        if(S[i]=='L'){
            left_count++;
        }else{
            if(left_count>0){
                if(left_count%2==0){
                    ANS[i+1] += left_count/2;
                    ANS[i] += left_count/2;
                }else{
                    ANS[i+1] += left_count/2 +1;
                    ANS[i] += left_count/2;
                }
                left_count = 0;
            }
        }
    }

    for (int i = 0; i < S.length(); ++i) {
        if(i==0){
            cout<<ANS[i];
        }else{
            cout<<" "<<ANS[i];
        }
    }

    cout<<endl;



    return 0;
}