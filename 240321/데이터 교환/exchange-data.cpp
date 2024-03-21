#include<iostream>
using namespace std;

void change(int m, int k){
    int temp = m;
    m=k;
    k=temp;
}

int main(){
    int a=5;
    int b=6;
    int c=7;
    int temp=a;
    a=b;
    b=temp;

    int tmp=a;
    a=c;
    c=tmp; 
    cout<<a<<"\n";
    cout<<b<<"\n";
    cout<<c<<"\n";
    return 0;
}