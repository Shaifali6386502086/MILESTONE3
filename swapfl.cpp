#include <iostream>
using namespace std;
int main()
{//to swap first and last digit of a number
int num,lnum,fnum;
cout<<"enter the number:"<<endl;
cin>>num;
lnum=num%10;

fnum=num;
while(fnum>10)
{fnum=fnum/10;
}

int rem, rev=0;
int temp=num/10;
while(temp>10)
{rem=temp%10;
    rev=rev*10+rem;
    temp=temp/10;
}
int revn=0;
int remn;
while(rev>0)
{
    remn=rev%10;
    revn=revn*10+remn;
    rev=rev/10;
}
cout<<lnum<<revn<<fnum<<endl;
return 0;
}