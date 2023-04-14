#include<stdio.h>
//Write program, which reads another integer k and prints the kth factor. 
//If given number is 24 and k is 5 then output is 8.
int main()
{
    int n,k,i,a;
    printf("Enter number and an integer");
    scanf("%d%d",&n,&k);//24    5
    for( i=2;i<=n;i++)
    {
        if(n%i==0 && k>0 ) //2&5....3&4....4&3....6&2....8&1
        {
            a=i; //2....3....4....6...8
            k--; //4....3....2....1...0
        }
    }
    printf("%d",a);//8
    return 0;
}