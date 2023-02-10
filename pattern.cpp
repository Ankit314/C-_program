#include<iostream>
#include<stdio.h>
using namespace std;
class Ankit{
    private:
    int n=5;
    int x=n;
    public:
    void pantternA()
    {
        for(int i=1;i<=n;i++){
            for(int j=1;j<=2*n;j++)
            {
                if(j==x || j==n+i-1){
                    cout<<"*";
                }
                else if ((j>=x)!=false && j<=n+i-1 && i==n/2+1)
                {
                    cout<<"*";
                }
                else{
                    cout<<" ";
                }
                
            }
            cout<<endl;
            x--;
        }
    }
    void patternN()
    {
        for (int i=1;i<=n;i++){
            for (int j=1;j<=n;j++){
                if (j==1 || j==n || i==j){
                     cout<<"* ";
                }
                else {
                    cout<<" ";
                }
            }
            cout<<endl;

        }
    }
    void patternK()
    {
        int x=n/2+1;
        for (int i=1;i<=n;i++)
        {
            for (int j=1;j<=n/2+1;j++)
            {
                if (j==1 || j==x)
                {
                    cout<<"*";
                }
                else
                {
                    cout<<" ";
                }
            }
            if (i<=n/2){
                x--;
            }
            else
            {
                x++;
            }
            cout<<endl;


        }
    }
    void patternI()
    {
        for (int i=1;i<=n;i++)
        {
            for (int j=1;j<=n;j++){
                if (i==1 || i==n || j==n/2+1){
                    cout<<"*";
                }
                else {
                    cout<<" ";
                }
            }
            cout<<endl;
        }
    }
    void patternT(){
        for (int i=1;i<=n;i++){
            for (int j=1;j<=n;j++){
                if (i==1 || j==n/2+1){
                    cout<<"*";
                }
                else {
                    cout<<" ";
                }
            }
            cout<<endl;

        }
    }

};
int main(){
    Ankit obj;
    obj.pantternA();
    obj.patternN();
    obj.patternK();
    obj.patternI();
    obj.patternT();
}