#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    vector<int> v;
    vector<int>::iterator it;
    int n;
    cin>>n;
    int cmd;
    string s;
    while(n--){
        cin>>s;
        if(s=="push_back"){
            cin>>cmd;
            v.push_back(cmd);
        }
        else if(s=="pop_back"){
            v.pop_back();
        }
        else if(s=="size"){
            cout<<v.size()<<"\n";
        }
        else if(s=="get"){
            cin>>cmd;
            cout<<v[cmd-1]<<"\n";
        }
    }
    
    return 0;
}