#include<stdio.h>
//Write program, which reads two numbers and finds the sum of smallest factors. e.g. input number 
//35 and 21 output 5+3=8.
int main()
{
    int a,b,i,f1=0,f2=0;
    printf("Enter two number: ");
    scanf("%d%d",&a,&b);//35,21
    for(i=2;i<=(a+b);i++)//35+21
    {
       if(a%i==0 && f1==0)//5
       {
          f1=i;//5
       }
       if(b%i==0 && f2==0)//3
       {
          f2=i;//3
       }
    }
    printf("Sum of the two smallest factors is: %d",f1+f2);//5+3
    return 0;
}