#include <iostream>
#include <vector>
#include <algorithm>

#define MAX_NUM 25
#define DIR_NUM 4

using namespace std;

int n;
int grid[MAX_NUM][MAX_NUM];
bool visited[MAX_NUM][MAX_NUM];
vector<int> people_nums;
int people_num;


//탐색하는 위치가 격자 범위 내에 있는지 여부를 반환합니다.
bool InRange(int x, int y){
    return x>=0 && x<n && y>=0 && y<n;
}

//탐색하는 위치로 움직일 수 있는지 여부를 반환합니다.
bool CanGo(int x, int y){
    if(!InRange(x,y)){
        return false;
    }
    if(visited[x][y]||grid[x][y]==0){
        return false;
    }
    return true;
}

void DFS(int x, int y){
    //0: 오른쪽, 1: 아래쪽, 2: 왼쪽, 3: 위쪽
    int dx[DIR_NUM]={0,1,0,-1};
    int dy[DIR_NUM]={1,0,-1,0};

    //네 방향에 각각에 대하여 DFS 탐색을 합니다.
    for(int dir=0; dir<DIR_NUM;dir++){
        int new_x = x+dx[dir];
        int new_y = y+dy[dir];

        if(CanGo(new_x,new_y)){
            visited[new_x][new_y]=true;
            //마을에 존재하는 사람을 한 명 추가해줍니다.
            people_num++;
            DFS(new_x,new_y);
        }
    }
}
int main() {
    // 여기에 코드를 작성해주세요.
    cin>>n;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin>>grid[i][j];
        }
    }

    for(int i=0; i<n; i++){
        for(int j=0;j<n;j++){
            if(CanGo(i,j)){
                visited[i][j]=true;
                people_num=1;
                DFS(i,j);
                people_nums.push_back(people_num);
            }
        }
    }

    //각 마을 내 사람의 수를 오름차순으로 정렬합니다.

    sort(people_nums.begin(),people_nums.end());
    cout<<(int)people_nums.size()<<endl;
    for(int i=0;i<(int)people_nums.size();i++){
        cout<<people_nums[i]<<endl;
    }
    return 0;
}