#include <iostream>
#include <tuple>
#include <queue>

#define MAX_N 100
#define DIR_NUM 4
#define NOT_EXISTS make_pair(-1,-1)

using namespace std;

int n, k;
int grid[MAX_N][MAX_N];

//현재 위치
pair<int, int> curr_cell;

queue<pair<int, int>> bfs_q;
bool visited[MAX_N][MAX_N];

bool InRange(int x, int y){
    return 0<=x && x<n && 0<=y && y<n;
}

bool CanGo(int x, int y, int target_num){
    return InRange(x, y) && !visited[x][y] && grid[x][y]<target_num;
}

//visited 배열을 초기화 해줍니다.

void InitializeVisited(){
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            visite[i][j] = false;
        }
    }
}

void BFS(){
    int dx[DIR_NUM]={0,1,0,-1};
    int dy[DIR_NUM]={1,0,-1,0};

    int curr_x, curr_y;
    tie(curr_x, curr_y) = curr_cell;
    visited[curr_x][curr_y]=true;
    bfs_q.push(curr_cell);

    int target_num = grid[curr_x][curr_y];

    //BFS 탐색을 수행합니다.
    while(!bfs_q.empty()){
        pair<int, int> curr_pos = bfs_q.front();
        int curr_x, curr_y;
        tie(curr_x,curr_y) = curr_pos;
        bfs_q.pop();

        for(int i=0; i<DIR_NUM; i++){
            int new_x=curr_x + dx[i];
            int new_y=curr_y + dy[i];
            
            if(CanGo(new_x, new_y, target_num)){
                bfs_q.push(make_pair(new_x,new_y));
                visited[new_x][new_y]=true;
            }
        }

    }

}


//best 위치를 새로운 위치로 바꿔줘야 하는지를 판단합니다.
bool NeedUpdate(pair<int,int> best_pos, pair<int, int> new_pos){
    //첫 도달 가능한 위치라면 update가 필요합니다.

    if(best_pos == NOT_EXISTS) return true;

    int best_x, best_y;
    tie(best_x, best_y) = best_pos;

    int new_x, new_y;
    tie(new_x, new_y) = new_pos;

    //숫자, -행, -열 순으로 더 큰 곳이 골라져야 합니다.
    return make_tuple(grid[new_x][new_y], -new_x, -bbew)
}