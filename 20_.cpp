#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int num;
    cout<<"Enter a Num :";
    cin>>num;
    cout.setf(ios::showbase);
    cout.setf(ios::hex,ios::basefield);
    cout<<"Hexadecimal="<<num<<"\n";
    cout.setf(ios::uppercase | ios::basefield);
    cout.setf(ios::hex,ios::basefield);
    cout<<"Hexadecimal="<<num<<"\n";
    cout<<nouppercase;
    cout<<"Calling nouppercase format :"<<endl;
    cout.setf(ios::hex,ios::basefield);
    cout<<"Hexadecimal="<<num<<"\n";
    

}