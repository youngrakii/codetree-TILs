#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int a=5;
    int b=6;
    int c=7;

    int temp1=a;
    a=b;
    b=temp1;

    int temp2=c;
    c=b;
    c=temp2;

    int temp3=a;
    c=a;
    a=temp3;

    

    cout<<a<<"\n";
    cout<<b<<"\n";
    cout<<c<<"\n";
    return 0;
}