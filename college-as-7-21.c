#include<stdio.h>
//Write program, which outputs pairs of consecutive factors. e.g. if input is 12 then output is 
//(1,2)(2,3)(3,4)(4,6)(6,12). Input 385 output (1,5)(5,7)(7,11)(11,35) (35,55) (55,77) (77,385).
int main()
{
    int n,i,a=0,b=1;
    printf("Enter number: ");
    scanf("%d",&n); //12
    for(i=2;i<=n;i++)
    {
        if(n%i==0) // 2...3...4...6...12
        {
            a=b;//1....2....3...4...6....12
            b=i;//2....3...4...6...12
            printf("(%d,%d) ",a,b);//(1,2) (2,3) (3,4) (4,6) (6,12)
        }
    }
    return 0;
}