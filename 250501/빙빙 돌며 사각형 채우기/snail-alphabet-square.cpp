#include <iostream>

using namespace std;

//전역 변수 선언;
//이미 방문한 적이 있다면 true / 아니라면 false로 표시합니다.
bool visited[100][100] = {0};

//함수 선언:
bool CanGo(int n, int m, int new_x, int new_y){
    //나아가려는 위치가 직사각형 안에 들어 있는지 확인하고
    //들어있다면 아직 방문한 적이 없는 곳인지 판단합니다.

    if(0<=new_x && new_x<n && 0<=new_y && new_y<m && visited[new_x][new_y]==false){
        return true;
    }
    else{
        return false;
    }
}

int main(){
    //변수 선언:
    int n,m;
    char answer[100][100]={0}; //답에 해당하는 알파벳을 적을 배열입니다.

    cin>>n>>m;

    int dx[4]={0,1,0,-1};
    int dy[4]={1,0,-1,0};
    int curr_x=0;
    int curr_y=0;
    int direction=0;

    answer[curr_x][curr_y]='A';
    visited[curr_x][curr_y]=true;

    for(int i=1; i<n*m; i++){
        while(true){
            int next_x = curr_x + dx[direction];
            int next_y = curr_y + dy[direction];

            if(CanGo(n,m,next_x,next_y)){
                curr_x = next_x;
                curr_y = next_y;
                visited[curr_x][curr_y]=true;
                answer[curr_x][curr_y]=(char)(i%26+'A');
                break;
            }
            else{
                direction=(direction+1)%4;
            }
        }
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cout<<answer[i][j]<<" ";
        }
        cout<<"\n";
    }

    return 0;
}