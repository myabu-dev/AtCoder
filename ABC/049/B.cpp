//
// Created by Myabu on 2020/01/15.
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
    int H, W;
    char C[110][110];
    cin>>H>>W;

    for (int i = 0; i < H; ++i) {
        for (int k = 0; k < W; ++k) {
            cin>>C[i][k];
        }
    }
    for (int i = 0; i < H; ++i) {
        for (int k = 0; k < W; ++k) {
            cout<<C[i][k];
        }
        cout<<endl;
        for (int k = 0; k < W; ++k) {
            cout<<C[i][k];
        }
        cout<<endl;
    }



    return 0;
}