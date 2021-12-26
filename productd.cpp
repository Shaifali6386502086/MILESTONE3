#include <iostream>
using namespace std;
int main()
{//to find product of digits of a number
int a;
cout<<"Enter the number :"<<endl;
cin>>a;
int pro=1;
int rem;
while(a>0)
{rem=a%10;
pro=pro*rem;
a=a/10;
}
cout<<"Sum of the digits:"<<pro;
    return 0;
}
