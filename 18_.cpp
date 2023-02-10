#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int num;
    cout<<"Enter a Number :\n";
    cin>>num;
    cout.setf(ios::showbase);
    cout<<"Decimal num=:"<<num<<"\n";
    cout.setf(ios::oct,ios::basefield);
    cout<<"Octal num =:"<<num<<"\n";
    cout.setf(ios::hex,ios::basefield);
    cout<<"Hexa Num =:"<<num<<"\n";
    cout.setf(ios::dec,ios::basefield);
    cout<<"Decimal Num=:"<<num<<"\n";
    cout<<noshowbase;
    cout<<"Calling noshowbase and default is decimal\n";
    cout<<"decimal="<<num<<"\n";
    
}