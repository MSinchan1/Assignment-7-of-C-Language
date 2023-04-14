#include<stdio.h>
//Write program, which will output all factors by exchanging last two digits. 
//Input 385 output 50 70 11 53 55 77 358.
int main()
{
    int n,ex;
    printf("Enter number: ");
    scanf("%d",&n); //385
    for(int i=2;i<=n;i++)
    {
        if(n%i==0) //5....7....11....35....55...77....385
        {
            ex=i-(i%100)+(i%10)*10+(i/10)%10; //5-5+5*10+0.......385-85+5*10+8
            printf(" %d",ex);//50....70...11..53...77..358
        }
    }
    return 0;
}