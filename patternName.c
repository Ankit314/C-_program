#include<stdio.h>
#include<conio.h>
void pantternA();
void patternN();
int main(){
     pantternA();
     patternN();
     getch();

}
void pantternA()
    {
        int n=5;
        int x=n;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=2*n;j++)
            {
                if(j==x || j==n+i-1){
                    //cout<<"*";

                    printf("* ");
                }

                else if ((j>=x)!=0 && j<=n+i-1 && i==n/2+1)
                {

                    printf(" * ");
                }
                
                else
                {

                    printf("   ");
                }
                
            }
             printf("\n");
            x--;
        }
    }
    void patternN()
    {
         int m=5;
        // int y=n;
        for (int l=1;l<=m;l++)
        {
            for (int k=1;k<=m;k++)
            {
                if (k==1 || k==m || l==k)
                {
                    printf("* ");
                }
                else 
                {
                    printf("* ");
                }
            }
            printf("\n ");
        }

     
    }

    
     