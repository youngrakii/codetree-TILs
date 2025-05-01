#include <iostream>
#include <vector>
#include <string>

using namespace std;

int dx[4] = {-1,0,1,0};
int dy[4]= {0,1,0,-1};

int main(){
    int N,T;
    cin>>N>>T;

    string commands;
    cin>>commands;

    vector<vector<int>> grid(N, vector<int>(N));
    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            cin>>grid[i][j];
        }
    }

    int x = N/2;
    int y = N/2;
    int dir = 0;

    int sum = grid[x][y];

    for(char cmd:commands){
        if(cmd=='L'){
            dir=(dir+3)%4;
        }
        else if(cmd=='R'){
            dir=(dir+1)%4;
        }
        else if (cmd=='F'){
            int nx = x +dx[dir];
            int ny = y +dy[dir];

            if(nx>=0 && nx<N && ny>=0 && ny<N){
                x=nx;
                y=ny;
                sum+=grid[x][y];
            }
        }
    }

    cout<<sum<<"\n";
    return 0;
}