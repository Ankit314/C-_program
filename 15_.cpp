#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    int num;
    cout<<"Enter a num :\n";
    cin>>num;
    cout<<"Default Display Decimal="<<num<<"\n";
    cout.setf(ios::oct,ios::basefield);
    cout<<"Octal ="<<num<<"\n";
    cout.setf(ios::hex,ios::basefield);
    cout<<"Hexa="<<num<<"\n";
    cout.setf(ios::dec,ios::basefield);
    cout<<"Decimal="<<num<<"\n";
    
}