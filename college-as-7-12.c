#include<stdio.h>
//Write program, which prints the smallest and second smallest factors. 
//If number is 24 then outputs are 2 and 3. If number is 65 then outputs are 5 and 13.
int main()
{
    int n,factors,j=0,a=0,b;
    printf("Enter number: ");
    scanf("%d",&n); //24
    for(int i=2;i<n;i++)
    {
        if(n%i==0 && j<2) //2&0...3&1
        {
            b=a;//garbage value.......2
            a=i;// 3
            j+=1;//0+1....1+1...2+1
        }
    }
    if(j>0)
    {
        printf("Smallest factor is: %d and Second smallest factor is: %d",b,a);
    }
    else //13
    {
        printf("It is a prime number, it has only two factor 1 and %d",n);
    }
    return 0;
}