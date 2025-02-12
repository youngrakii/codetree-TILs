#include <iostream>
#include<algorithm>

#define Max_Num 20

int grid[Max_Num][Max_Num];
int dis_grid[Max_Num][Max_Num];

int n;
int m;

using namespace std;

int countNum(int height, int width, int row, int col){
    int Max_rec = 0;
    for(int i = row; i<=row+height-1; i++){
        for(int j = col; j<=col+width-1; j++){
            Max_rec += dis_grid[i][j];
    }
    }

    return Max_rec;

}

int main(){
    cin>>n>>m;

    for(int i = 0 ; i<n; i++){
        for(int j = 0 ; j<m; j++){
            cin>>grid[i][j];
        }
    }

    //양수 판별
    for(int i = 0 ; i<n; i++){
        for(int j = 0 ; j<m; j++){
            if(grid[i][j]>0){
                dis_grid[i][j] = 1;
            }

            else dis_grid[i][j] = 0;
        }
    }
    

    long int max_num=-1;

    for(int height = 1; height<=n; height++){
        for(int width = 1; width <= m; width++){
            for(int i = 0 ; i<n; i++){
                for(int j = 0 ; j<m; j++){
                    long int ins_num = countNum(height, width, i , j);
                    if(ins_num == height*width){
                        max_num = max(ins_num, max_num);
                    }
                    else continue;

                }
            }
        }
        
    }

    cout<<max_num;
    return 0;
}
