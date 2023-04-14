#include<stdio.h>
//Write program, which reads two numbers and prints all common factors. If given numbers are 24 and 54 then outputs\
// are 2, 3 and 6.
int main()
{
    int a,b;
    printf("Enter two numbers: ");
    scanf("%d%d",&a,&b);//24   54
    for(int i=2;i<=(a+b);i++)
    {
        if(a%i==0 && b%i==0) //2....3....6
        {
            printf(" %d,",i);//2....3....6
        }
    }
    return 0;
}