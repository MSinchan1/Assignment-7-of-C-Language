#include<stdio.h>
//Write program, which finds the sum of product of consecutive factors. e.g. if given number is 12 then answer is
// 114. Since 2.3+3.4+4.6+6.12=114. 
int main()
{
    int n,i,sum=0,a=0,b=0;
    printf("Enter number: ");
    scanf("%d",&n); //12
    for(i=2;i<=n;i++)
    {
        if(n%i==0)//2...3...4...6...12
        {
            a=b;//0...2...3...4....6....12
            b=i;//2....3...4...6....12
            sum=sum+(a*b);//0+0*2....0+2*3....6+3*4.....18+4*6.....42+6*12
        }
        
    }
    printf("%d",sum);//114
    return 0;
}