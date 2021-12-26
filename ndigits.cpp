#include <iostream>
using namespace std;
int main()
{
int a,count=0;

cout<<"enter the number whose digits are counted:"<<endl;
cin>>a;
while(a>0)
{a=a/10;
count=count+1;
}
cout<<"number of digits are"<<count;
   return 0;
}