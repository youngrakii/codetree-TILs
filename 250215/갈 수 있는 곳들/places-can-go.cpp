#include <iostream>
#include <queue>

#define MAX_N 100
#define DIR_NUM 4

using namespace std;

//전역 변수 선언:
int n, k;
int grid[MAX_N][MAX_N];

//bfs에 필요한 변수들 입니다.
queue<pair<int,int>> bfs_q;
bool visited[MAX_N][MAX_N];

bool InRange(int x, int y){
    return 0<=x && x<n && 0<=y && y<n;
}

bool CanGo(int x, int y){
    return InRange(x,y) && !grid[x][y] && !visited[x][y];
}

void BFS(){
    //queue에 남은 것이 없을 때까지 반복합니다.
    while(!bfs_q.empty()){
        //queue에서 가장 먼저 들어온 원소를 뺍니다.
        pair<int,int> currr_pos = bfs_q.bfs();
        int x = curr_pos.first, y=curr_pos.second;
        bfs_q.pop();

        int dx[DIR_NUM] = {1,-1,0,0};
        int dy[DIR_NUM] = {0,0,1,-1};

        //queue에서 뺀 원소의 위치를 기준으로 4방향을 확인해봅니다.
        for(int dir=0; dir<DIR_NUM; dir++){
            int nx = x+dx[dir], ny=y+dy[dir];

            
        }
    }
}