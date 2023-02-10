#include<iostream>
using namespace std;
int main()
{
    int sum,pro,diff,a,b;
    float div;
    cout<<"Enter any two num :";
    cin>>a>>b;
    sum=a+b;
    diff=a-b;
    pro=a*b;
    div=(float)a/(float)b;
    cout<<"a="<<a<<"b="<<b<<"sum="<<sum<<endl;
    cout<<"a="<<a<<"b="<<b<<"diffrence="<<diff<<endl;
    cout<<"a="<<a<<"b="<<b<<"Product="<<pro<<endl;
    cout<<"a="<<a<<"b="<<b<<"Division="<<div<<endl;
}