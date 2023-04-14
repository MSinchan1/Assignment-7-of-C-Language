#include<stdio.h>
//Write program to find average factor. I/p 24  o/p 8.429 (59/7)      I/p 25   o/p 15.67  (47/3) 
int main()
{
    int n,sum=0,count=0;
    printf("Enter number: ");
    scanf("%d",&n);//24
    for(int i=2;i<=n;i++)
    {
        if(n%i==0)//2...3...4...6...8...12...24
        {
            sum+=i;//0+2....2+3....5+4....9+6....15+8....23+12.....35+24
            count+=1;//1...2....3...4...5...6...7
        }
    }
    printf("Average of the factors: %f",(float)sum/count);//59/7=8.429
    return 0;
}