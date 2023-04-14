#include<stdio.h>
//Write a program, which will print last digits of all factors. Input 385 output 5 7 1 5 5 7 5.
int main()
{
    int n,i;
    printf("Enter number :");
    scanf("%d",&n); //385
    for(i=2;i<=n;i++)
    {
       if(n%i==0) //5.....7....11....35......55....77...385
       {
        printf("%d ",i%10);// 5.....7....1.....5......5.....7....5
       }
    }
    return 0;
}