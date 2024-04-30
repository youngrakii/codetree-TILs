#include <iostream>
#include <string>

#define MAX_N 100
#define DIR_NUM 4

using namespace std;

int n;
int arr[MAX_N][MAX_N];

int dx[DIR_NUM]={0,1,0,-1};
int dy[DIR_NUM]={1,0,-1,0};

bool InRange(int x, int y){
    return 0 <= x && x<n && 0<= y && y<n;
}

int adjacentcnt(int x, int y){
    int cnt=0;
    for(int i=0; i<DIR_NUM; i++){
        int nx= x+dx[i], ny=y+dy[i];
        if(InRange(nx,ny)&&arr[nx][ny]==1){
            cnt++;
        }
    }
    return cnt;
}
int main() {
    // 여기에 코드를 작성해주세요.
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }

    int ans=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(adjacentcnt(i,j)>=3){
                ans++;
            }
        }
    }
    cout<<ans;
    return 0;
}