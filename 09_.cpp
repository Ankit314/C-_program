#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int value;
    cout<<"Enter a num :"<<endl;
    cin>>value;
    cout<<"Decimal base ="<<setbase(10) <<value<<endl;
    cout<<"Hexadecimal base ="<<setbase(16) <<value<<endl;
    cout<<"Octal base="<<setbase(8) <<value<<endl;
    
}