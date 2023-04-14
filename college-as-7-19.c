#include<stdio.h>
//Write program, which reads a number and prints all factors using ‘while’ (in place of ‘for’).
int main()
{
    int n,i=2;
    printf("Enter number: ");
    scanf("%d",&n);//24
    while(i<=n)
    {
        if(n%i==0)//2....3...4...6....8...12.....24
        {
            printf(" %d",i);//2....3...4...6...8....12....24
        }
        i++;
    }
    return 0;
}