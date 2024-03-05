#include <iostream>
using namespace std;
void Printrec(int n, int m){
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<"1";
        }
        cout<<"\n";
    }
}

int main() {
    int r,c;
    cin>>r>>c;
    Printrec(r,c);
    // 여기에 코드를 작성해주세요.
    return 0;
}