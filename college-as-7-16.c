#include<stdio.h>
//Modify the above program to print the greatest common factor. Input 24 35 output 1. Input 42, 54 output 6.
int main()
{
    int a,b,gcf;
    printf("Enter two number: ");
    scanf("%d%d",&a,&b);//42 54
    for(int i=1;i<=(a+b);i++)
    {
        if(a%i==0 && b%i==0)//2....6
        {
            gcf=i;//2....6
        }
    }
    printf("Greatest common factor is: %d",gcf);//6
    return 0;
}