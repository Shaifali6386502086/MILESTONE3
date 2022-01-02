#include <iostream>
using namespace std;
int main()
{int a,b;
    cout<<"Enter two the number:"<<endl;
    cin>>a>>b;
    int hcf=0;
    for(int i=2;i<=a&&i<=b;i++)
    {
        if(a%i==0&&b%i==0)
        hcf=i;
        
    }
    cout<<"Hcf of two numbers is:"<<hcf;
  
  return 0;}  