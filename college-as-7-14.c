#include<stdio.h>
//Write program, which reads a number. Let ‘t’ be its smallest factor. The program finds the smallest factor of t+2.
// e.g. input 77 output 3 (since smallest factor of 77 is 7 and smallest factor of 7+2 is 3). Input 55 output 7.
int main()
{
    int n,t=0,f=0,j,i;
    printf("Enter number: ");
    scanf("%d",&n);//77
    for(i=2;i<=n;i++)
    {
        if(n%i==0 && t==0)//7
        {
            t=i+2;//7+2
        }
        for(j=2;j<=t;j++)
        {
            if(t%j==0 && f==0)//3
            {
                f=j;//3
            }
        }
    }
    printf("Smallest factor of t+2 is: %d",f);//3
    return 0;
}