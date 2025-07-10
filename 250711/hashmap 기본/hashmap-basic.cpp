#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

int n;
int k;
int v;
string command;
unordered_map<int,int> m;

int main(){
    //입력:
    cin>>n;

    for(int i=0; i<n; i++){
        cin>>command;

        if(command=="add"){
            cin>>k>>v;
            m[k]=v;
        }
        else if(command=="remove"){
            cin>>k;
            m.erase(k);
        }
        else{
            cin>>k;
            if(m.find(k)==m.end()){
                cout<<"None"<<"\n";
            }
            else{
                cout<<m[k]<<"\n";
            }
        }
    }

    return 0;
}