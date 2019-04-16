//
// Created by yuu on 2019-04-16.
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

int reached[110][110];
int H, W;
char maze[110][110];


void dfs(int x, int y){
    if(reached[x][y] == 1){
        return;
    }

    if(maze[x][y] == '#'){
        return;
    }

    reached[x][y]=1;


    if(x+1<W && y<H){
        dfs(x+1,y);
    }
    if(x<W && y+1<H){
        dfs(x,y+1);
    }

    return;
}

int main(void){
    cin>>H>>W;

    for (int i = 0; i < H; ++i) {
        for (int j = 0; j < W; ++j) {
            cin>>maze[j][i];
        }
    }

    memset(reached, -1, sizeof(reached));

    dfs(0,0);

    for (int k = 0; k < H; ++k) {
        bool flag = true;
        for (int i = 0; i < W; ++i) {
            if(maze[i][k] == '#'){
                flag = false;
            }
        }

        if(flag && reached[W-1][H-1] == 1){
            cout<<"Yay!"<<endl;
            return 0;
        }
    }
    cout<<":("<<endl;

    return 0;
}