#include<stdio.h>
//Write program, which reads a number and prints only those factors, which leave remainder 2 when divided by 5. 
//e.g. if given number is 24 then its factors are 2, 3, 4, 6, 8, 12 and 24. However, only 2 and 12 will be printed.
int main()
{
    int n;
    printf("Enter number: ");
    scanf("%d",&n); //24
    for(int i=2;i<=n;i++)
    {
        if(n%i==0 && (i%5==2)) //2&2%5=2....12&12%5=2
        {
            printf(" %d",i);//2..12
        }
    }
    return 0;
}