#include<stdio.h>
//Write program, which reads a number and prints “yes” if the given number is prime. 
//If the given number is not a prime then “no” is printed. 
//(Use the program to find smallest factor. The smallest factor of a prime number is equal to itself). 
int main()
{
    int n,i=2,f=0,a;
    printf("Enter number");
    scanf("%d",&n);//24   13
    for(i=2;i<n;i++)
    {
        if(n%i==0)//2    
        {
            f=1;
            a=i;//2
            break;
        }
    }
    if(f==0)
    {
        printf("Yes\nSmallest factor is: %d",n);// 13    13
    }
    else
    {
        printf("No\nSmallest factor is: %d",a);//24    2
    }
    return 0;
}