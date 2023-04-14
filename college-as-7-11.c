#include<stdio.h>
//Write program, which prints biggest factor other than itself. 
int main()
{
    int n,max_factor;
    printf("Enter number: ");
    scanf("%d",&n); //24.......13
    for(int i=2;i<n;i++)
    {
        if(n%i==0) //2.....3.....4....6...8...12
        {
            max_factor=i;//2....3....4...6....8.....12
        }
    }
    if(n%max_factor==0)//24%12=0
    {
        printf("Max factor is %d other than itself",max_factor); //12
    }
    else //13
    {
        printf("It is a prime number, it's biggest factor is 1 other then itself");
    }
    return 0;
}