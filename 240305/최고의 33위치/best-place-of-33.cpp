#include <iostream>
#include <algorithm>
#define MAX_N 20
using namespace std;

int n;
int grid[MAX_N][MAX_N];


int GetNumofGold(int i_s,int j_s,int i_e,int j_e){
    int num_of_gold=0;
    for(int i=i_s;i<=i_e;i++){
        for(int j=j_s;j<=j_e;j++){
            num_of_gold+=grid[i][j];
        }
    }
    return num_of_gold;
}


int main() {
    int max_gold=0;
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>grid[i][j];
        }
    }

    for(int i=0; i<n;i++){
        for(int j=0; j<n;j++){
            if(i+2>=n||j+2>=n) continue;
            int num_of_gold=GetNumofGold(i,j,i+2,j+2);
            max_gold=max(max_gold,num_of_gold);

        }
    }
    cout<<max_gold;
    return 0;
}