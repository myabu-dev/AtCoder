//
// Created by yuu on 2019-04-12.
//

#include <iostream>
#include <queue>

using namespace std;

const int INF = 10000000;

int goal_x, goal_y;
int start_x, start_y;

char maze[51][51];

typedef pair<int,int> P;

int reached[51][51];

int dx[] = {0,0,1,-1};
int dy[] = {1,-1,0,0};

int R,C;

int bfs(){
    queue<P> que;
    for(int i=1;i<51;i++){
        for(int k=1;k<51;k++){
            reached[i][k] = INF;
        }
    }

    que.push(P(start_x,start_y));
    reached[start_x][start_y] = 0;

    while(que.size()){
        P p = que.front(); que.pop();

        if(p.first == goal_x && p.second == goal_y)break;

        for(int i=0; i<4 ; i++){
            int nx = p.first + dx[i];
            int ny = p.second + dy[i];

            if(0<nx && 0<ny && nx <= C && ny <= R && maze[nx][ny] != '#' && reached[nx][ny] == INF){
                que.push(P(nx,ny));
                reached[nx][ny] = reached[p.first][p.second] + 1;
            }
        }
    }

    return reached[goal_x][goal_y];

}

int main(){
    cin>>R>>C;
    cin>>start_y>>start_x;
    cin>>goal_y>>goal_x;

    for(int y=1; y<=R; y++){
        for(int x=1; x<=C; x++){
            cin>>maze[x][y];
        }
    }

//    for(int y=1; y<=R; y++){
//        cout<<endl;
//        for(int x=1; x<=C; x++){
//            cout<<maze[x][y];
//        }
//    }

    cout<<bfs()<<endl;
}