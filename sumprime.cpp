#include <iostream>
using namespace std;
int main()
{int a,b=0;
int sum=0;
cout<<"enter the number:"<<endl; 
cin>>a;
for(int i=2;i<=a;i++)
{
    for(int j=2;j<i;j++)
    {
        if(i%j==0)
        b=1;
    }
    if(b==0)
    sum=sum+i;
} 
cout<<"sum of prime numbers:"<<sum;
 return 0;
}