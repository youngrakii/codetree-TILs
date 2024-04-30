#include <iostream>
#include <string>

#define DIR_NUM 4

using namespace std;

string dirs;
int x=0;
int y=0;
int curr_dir = 3;

int dx[DIR_NUM] = {1, 0 ,-1, 0};
int dy[DIR_NUM]={0,-1,0,1};

int main() {
    // 여기에 코드를 작성해주세요.
    cin>>dirs;

    for(int i=0;i<(int)dirs.size();i++){
        char c_dir=dirs[i];
        if(c_dir=='L'){
            curr_dir=(curr_dir-1+4) % 4;
        }
        else if(c_dir=='R'){
            curr_dir=(curr_dir+1)%4;
        }
        else{
            x+=dx[curr_dir];
            y+=dy[curr_dir];
        }
    }
    cout<<x<<" "<<y;
    return 0;
}