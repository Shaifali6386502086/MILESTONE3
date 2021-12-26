#include <iostream>
using namespace std;
int main()
{//to find sum of digits of a number
int a;
cout<<"Enter the number :"<<endl;
cin>>a;
int sum=0;
int rem;
while(a>0)
{rem=a%10;
sum=sum+rem;
a=a/10;
}
cout<<"Sum of the digits:"<<sum;
    return 0;
}
