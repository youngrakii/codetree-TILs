#include <iostream>
using namespace std;
int gcd(int a,int b){
    int r=a%b;
    while(r!=0){
        a=b;
        b=r;
        r=a%b;
    }
    return b;
}
int lcm(int n,int m){
    return (n*m)/gcd(n,m);
}

int main() {
    int a,b;
    cin>>a>>b;
    cout<<lcm(a,b);
    // 여기에 코드를 작성해주세요.
    return 0;
}