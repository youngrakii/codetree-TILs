#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    string s;
    string t;
    cin>>s>>t;
    string tmp=s;
    s=t;
    t=tmp;
    cout<<s<<"\n";
    cout<<t;
    return 0;
}