#include<stdio.h>
//Write program, to find the number of factors. Input 24 output 7. Input 35 output 3.
int main()
{
    int n,count=0;
    printf("Enter number: ");
    scanf("%d",&n);//24
    for(int i=2;i<=n;i++)
    {
        if(n%i==0)//2...3...4...6...8...12...24
        {
            count+=1;//1...2..3...4....5...6...7
        }
    }
    printf("Total number of factors: %d",count);// 7
    return 0;
}