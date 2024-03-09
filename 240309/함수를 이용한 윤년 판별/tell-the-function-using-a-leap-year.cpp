#include <iostream>
using namespace std;

bool IsYoon(int t){
    if(t%4!=0) return false;
    else if(t%100==0 && t%400 != 0) return false;
    else return true;
}

int main() {
    int y;
    cin>>y;
    if(IsYoon(y)){
        cout<<"true";
    }
    else{
        cout<<"false";
    }
    return 0;
}