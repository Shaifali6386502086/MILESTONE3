#include <iostream>
using namespace std;
int main()
{//to check a number is prime or not
int a;
cout<<"enter the number:"<<endl;
cin>>a;
int n=1;
for(int i=2;i<a;i++)
{ n=a%i; 
if(n==0)
{
cout<<" not a prime number"<<endl;
break;
}
}
if(n!=0)
cout<<"numberis prime";
return 0;
}