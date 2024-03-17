#include <iostream>
#include <string>
using namespace std;

string str;

int main() {
    // 여기에 코드를 작성해주세요.
    cin>>str;
    int n=(int) str.size();
    int cnt=0;
    for(int i=0; i<n; i++){
        for(int j=i+1;j<n;j++){
            if(str[i]=='('&&str[j]==')'){
                cnt++;
            }
        }
    }
    cout<<cnt;
    return 0;
}