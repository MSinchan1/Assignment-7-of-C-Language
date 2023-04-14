#include<stdio.h>
//Write program, which outputs all factors and its count. When number is 24 (1,2) (2,3) (3,4) (4,6) (5,8) 
//(6,12) (7,24) will be printed.
int main()
{
    int n,count=0;
    printf("Enter number: ");
    scanf("%d",&n); //24
    for(int i=2;i<=n;i++)
    {
        if(n%i==0) //2...3...4...6....8...12...24
        {
            count+=1;//1...2...3...4...5...6...7
            printf("(%d,%d) ",count,i);//(1,2) (2,3) (3,4) (4,6) (5,8) (6,12) (7,24)
        }
    }
    return 0;
}