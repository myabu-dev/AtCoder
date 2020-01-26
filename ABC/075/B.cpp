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

    cin>>H>>W;
    for (int i = 0; i < H; ++i) {
        cin>>S[i];
    }

    int dx[] = {1,0,-1,0,1,1,-1,-1};
    int dy[] = {0,1,0,-1,1,-1,-1,1};


    for (int y = 0; y < H; ++y) {
        for (int x = 0; x < W; ++x) {
            if(S[y][x] == '#')continue;
            int count = 0;
            for (int A = 0; A < 8; ++A) {
                int ax = x+dx[A];
                int ay = y+dy[A];

                if(ax<0 || ay<0 || ax>W || ay > H){
                    continue;
                }
                if(S[ay][ax] == '#')count++;
            }
            S[y][x] = (char)count + '0';
        }
    }

    for (int i = 0; i < H; ++i) {
        cout<<S[i]<<endl;
    }


    return 0;
}