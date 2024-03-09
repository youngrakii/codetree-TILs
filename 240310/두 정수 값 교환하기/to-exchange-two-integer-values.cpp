#include <iostream>
using namespace std;

int main() {
   int a[2];
   int n,m;

   cin>>n>>m;
   a[0]=n;
   a[1]=m;

   int temp=0;
   temp=a[0];
   a[0]=a[1];
   a[1]=temp;
   cout<<a[0]<<" "<<a[1];
    return 0;
}