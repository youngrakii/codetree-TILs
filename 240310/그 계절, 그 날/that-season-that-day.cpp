#include <iostream>
using namespace std;

bool IsLeapYear(int y){
    if(y%4==0 && y%100 !=0 || y%400==0){
        return true;
    }
    return false;
}

bool IsExistDay(int y, int m, int d){
    int num_of_days[13] = {0,31,0,31,30,31,30,31,31,30,31,30,31};
    num_of_days[2]=IsLeapYear(y)?29:28;
    return d<=num_of_days[m];
}

int main(){
    int y, m, d;
    cin>>y>>m>>d;
    if(!IsExistDay(y,m,d)){
        cout<<"-1";
        return 0;
    }
    if(m==3||m==4||m==5){cout<<"Spring";}
    else if(m==6||m==7||m==8){cout<<"Summer";}
    else if(m==9||m==10||m==11){cout<<"Fall";}
    else{cout<<"Winter";}
    return 0;
}