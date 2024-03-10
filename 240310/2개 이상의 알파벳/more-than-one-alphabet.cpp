#include <iostream>
#include <string>
using namespace std;

string str;
void Usingover2(){
    int cnt=0;
    for(int i=0;i<str.length();i++){
        if(str[i]!=str[i+1]) cnt++;
    }
    if (cnt>=2) cout<<"Yes";
    else cout<<"No";
}

int main() {
    cin>>str;
    Usingover2();
    return 0;
}