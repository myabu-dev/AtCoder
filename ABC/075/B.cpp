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
    int H,W;
    string S[55];

    for (int i = 0; i < H; ++i) {
        cin>>S[i];
    }

    for (int i = 0; i < H; ++i) {
        for (int k = 0; k < W; ++k) {
            if(S[i][k] == '.'){
                int temp = 0;
                if(i!=0){
                    if(S[i-1][k] == '#')temp++;
                    if(
                    if(S[i-1][k-1] == '#')temp++;
                }

            }
        }
    }


    return 0;
}