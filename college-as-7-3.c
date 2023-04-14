#include<stdio.h>
//Write program, which prints sum of all factors (input 24 output 2 + 3 + 4 + 6 + 8 + 12 + 24 = 59).
// Input 35 output 5+7+35=47.
int main()
{
    int n,sum=0;
    printf("Enter number: ");
    scanf("%d",&n); //24
    for(int i=2;i<=n;i++)
    {
        if(n%i==0)//2...3....4.....6....8....12....24
        {
           sum+=i;//0+2....2+3.....5+4.....9+6.....15+8.....23+12.......35+24
        }
    }
    printf("Sum of the factors: %d",sum);//59
    return 0;
}