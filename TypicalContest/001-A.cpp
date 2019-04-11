//
// Created by yuu on 2019-04-11.
//
#include <iostream>

using namespace std;

bool reached[600][600] = {};
int H,W;
char map[600][600];

void dfs(int x, int y){
    if(x< 0 || y < 0 || x > W-1 || y> H-1 || map[x][y] == '#')return;

    if(reached[x][y])return;

    reached[x][y] = true;

    dfs(x-1, y);
    dfs(x+1, y);
    dfs(x, y-1);
    dfs(x, y+ 1);

    return;
}

int main(){
    cin>>H>>W;
    int start_x;
    int start_y;
    int goal_x;
    int goal_y;
    for(int i=0; i < H; i++){
        for(int k=0; k < W; k++) {
            cin >> map[k][i];

            if (map[k][i] == 's') {
                start_x = k;
                start_y = i;
            }
            if (map[k][i] == 'g') {
                goal_x = k;
                goal_y = i;
            }
        }
    }

    dfs(start_x, start_y);

    if(reached[goal_x][goal_y] == 1){
        cout<<"Yes"<<endl;
    }else{
        cout<<"No"<<endl;
    }

//    for(int i=0; i < W; i++){
//        cout<<endl;
//        for(int k=0; k < H; k++){
//            cout<<reached[i][k];
//        }
//    }
//    cout<<endl<<goal_x<<","<<goal_y<<endl;
//    cout<<reached[goal_x][goal_y]<<endl;
    return 0;
}

