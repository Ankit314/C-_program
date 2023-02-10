#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int num;
    cout<<"Enter a Num :\n";
    cin>>num;
    cout<<"Decimal="<<num<<"\n";
    cout.setf(ios::oct,ios::basefield);
    cout<<"Octal="<<num<<"\n";
    cout.setf(ios::hex,ios::basefield);
    cout<<"Hexadecimal="<<num<<"\n";
    cout.setf(ios::dec,ios::basefield);
    cout<<"Decimal="<<num<<"\n";

}