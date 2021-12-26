#include <iostream>
using namespace std;
int main()
{//to find first and last digit of a number
int a,ldigit;
cout<<"enter the number:"<<endl;
cin>>a;
ldigit=a%10;
while(a>10)
{
    a=a/10;
}
cout<<"First digit of number is:"<<a;
cout<<"last digit of number is:"<<ldigit;
return 0;
}