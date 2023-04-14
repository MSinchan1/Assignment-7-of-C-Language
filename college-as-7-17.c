#include<stdio.h>
//Modify the above program to print the smallest common factor. Input 24, 15 output 3
int main()
{
    int a,b,f=0,i,scf;
    printf("Enter two number: ");
    scanf("%d%d",&a,&b); //24   15
    for( i=2;i<=a;i++)
    {
        if(a%i==0 && b%i==0 && f==0)  //3
        {
            f=1;
            scf=i;//3
        }
    }
    if(f==1)
    {
        printf("Smallest common factor is: %d",scf);//3
    }
    else
    {
        printf("Both numbers have only common factor 1");
    }
    return 0;
}