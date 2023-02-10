#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int num;
    cout<<"Enter a number :";
    cin>>num;
    cout.setf(ios::showbase);
    cout.setf(ios::showpos);
    cout.setf(ios::oct,ios::basefield);
    cout<<"Octal="<<num<<"\n";
    cout.setf(ios::hex,ios::basefield);
    cout<<"Hexa nu ="<<num<<"\n";
    cout.setf(ios::dec,ios::basefield);
    cout<<"Decimal="<<num<<"\n";
    cout<<"Calling noshowpos format flag\n";
    cout<<noshowpos;
    cout<<"Decimal="<<num<<"\n";
    
}