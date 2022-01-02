#include <iostream>
using namespace std;
int main(){
    int a;
cout<<"Enter the number upto which prime number is calculated:"<<endl;
cin>>a;
for(int j=2;j<=a;j++)
{int b=0;
for(int i=2;i<j;i++)
{
    if(j%i==0)
       b=1;
}
if(b==0)
cout<<j<<endl;
}


}
