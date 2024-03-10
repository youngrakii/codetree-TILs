#include <iostream>
#include <string>
using namespace std;

string str;

bool Palindrome(string &str){
    for(int i=0; i<(int)str.size();i++){
        if(str[i]!=str[(int)str.size()-i-1]){
            return false;
        }
    }
    return true;
}
int main() {
    // 여기에 코드를 작성해주세요.
    cin>>str;
    if(Palindrome(str)){
        cout<<"Yes";
    }
    else{
        cout<<"No";
    }
    return 0;
}