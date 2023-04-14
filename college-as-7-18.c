#include<stdio.h>
//Write program, which reads two numbers and finds the least common multiplier. e.g. input 24 and 54 then output is
// 216. [Do not use the method of (a*b/gcd(a,b)).] [Hint: modify above program by replacing x%i by i%x] 
int main()
{
    int a,b,i,lcf;
    printf("Enter two number: ");
    scanf("%d%d",&a,&b);//24    54
    for( i=2;i<=a*b;i++)
    {
        if(i%a==0 && i%b==0)//216
        {
            lcf=i;//216
            break;
        }
    }
    printf("Least common factor is: %d",lcf);//216
    return 0;
}