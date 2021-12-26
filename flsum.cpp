#include <iostream>
using namespace std;
int main()
{//to find first and last digit of a number
int a,ldigit,sum=0;
cout<<"enter the number:"<<endl;
cin>>a;
ldigit=a%10;
while(a>10)
{
    a=a/10;
}
sum=ldigit+a;
cout<<"sum of first and last digit is:"<<sum<<endl;
return 0;
}