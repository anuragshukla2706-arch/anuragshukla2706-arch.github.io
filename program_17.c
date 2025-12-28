#include<stdio.h>
int main()
{
    int n,sum=0,digit;
    printf("enter your no");
    scanf("%d",&n);
    while(n>0)
    {
    digit=n%10;
    sum=sum+digit;
    n=n/10;
    }
    printf("sum of a digit %d",sum);
    return 0;


}