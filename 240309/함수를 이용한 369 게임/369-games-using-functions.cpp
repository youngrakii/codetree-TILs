#include <iostream>
using namespace std;

bool Contains369(int n){
    while(n>0){
        if(n%10==3 || n %10 ==6 || n%10 == 9){
            return true;
        }
        n/=10;
    }
    return false;
}
bool Is369numbers(int n){
    return Contains369(n) || (n%3==0);
}

int main(){
    int a,b;
    cin>>a>>b;
    int cnt=0;
    for(int i=a;i<=b;i++){
        if(Contai(i)){cnt++;}
    }
    cout<<cnt;
    return 0;
}