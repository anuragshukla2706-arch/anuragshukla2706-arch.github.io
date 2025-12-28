#include <stdio.h>
int main()
{int a,b,temp;
printf("enter the value of a");
scanf("%d",&a);
printf("enter the value of b");
scanf("%d",&b);
temp=a;
a=b;
b=temp;
printf("value of a after swap a=%d",a);
printf("value of b after swap b=%d",b);
return 0;
}