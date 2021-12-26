#include <iostream>
using namespace std;
int main()
{//program to reverse a number
int num;
cout<<"enter the number:"<<endl;
cin>>num;
int rem, rev=0;

while(num>0)
{rem=num%10;
    rev=rev*10+rem;
  num  =num/10;
}
cout<<"Reverse of the number:"<<rev;
return 0;
}