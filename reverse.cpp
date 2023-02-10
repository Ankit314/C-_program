#include<iostream>
#include<stdio.h>
using namespace std;
class A{
    private:
    int n,rem,store=0;
    public:
    void input()
    {
    cout<<"Enter any Number :";
    cin>>n;
    }
    void show(){
         while(n>0){
            rem=n%10;
            // cout<<rem;
            store=(store*10)+rem;
            n=n/10;


        }
        cout<<"Reverse Number :"<<store;
    }
};
int main(){
    A obj;
    obj.input();
    obj.show();

}