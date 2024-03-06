#include <iostream>
#include <algorithm>
using namespace std;

#define MAX_N 100

int n,m;
int grid[MAX_N][MAX_N];

int main() {
    cin>>n>>m;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>grid[i][j];
        }
    }

    int cnt1=0;
    int cnt2=0;
    int ans=0;

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(grid[i][j]==grid[i][j+1]){
                cnt1++;
                if(cnt1>=m) ans++;
            }
            if(grid[i][j]==grid[i+1][j]){
                cnt2++;
                if(cnt2>=m) ans++;
            }
        }
    }

    cout<<ans;

    return 0;
}