//
// Created by Myabu on 2020/01/07.
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
    string N;
    cin>>N;

    if(N[0] == N[1] && N[1] == N[2]){
    }else{
        int temp = (N[0] - '0') * 100 + (N[1] -'0') *10 + (N[2] -'0');
        int temp_2 = (N[0] - '0') * 100 + (N[0] -'0') *10 + (N[0] -'0');

        if(temp <= temp_2){
            for (int i = 0; i < N.length(); ++i) {
                N[i] = N[0];
            }
        }else{
            N[0] += 1;
            for (int i = 0; i < N.length(); ++i) {
                N[i] = N[0];
            }
        }
    }

    cout<<N<<endl;
    return 0;
}