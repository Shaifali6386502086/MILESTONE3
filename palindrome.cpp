#include <iostream>
using namespace std;
int main()
{//program to check a number is palindrome or not
int a;
cout<<"enter the number:"<<endl;
cin>>a;
int rem, rev=0;
int num=a;
while(num>0)
{rem=num%10;
    rev=rev*10+rem;
  num  =num/10;
}
if(a==rev)
cout<<"number is palindrom";
else
cout<<"number is not palindrom";
return 0;
}