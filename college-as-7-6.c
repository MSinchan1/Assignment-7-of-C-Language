#include<stdio.h>
//Write program, which reads a number and prints “yes” if the given number is prime. 
//If the given number is not a prime then “no” is printed. (Hint: Use above program. 
//A prime number has only one factor). Input 24 output “no”. Input 13 output “yes”.
int main()
{
    int n,f=0;
    printf("Enter number");
    scanf("%d",&n); //24   13
    for(int i=2;i<n;i++)
    {
        if(n%i==0 && f==0)//2
        {
            f=1;
        }
    }
    if(f==0)
    {
        printf("Yes"); //13
    }
    else
    {
        printf("No");//24
    }
    return 0;
}