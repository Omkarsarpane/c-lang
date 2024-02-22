
#include <stdio.h>

int main()
{
    int a,b;
    printf("enter value of a & b:");
    scanf("%d%d",&a,&b);
    printf("before value of \n a=%d b=%d",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("\nafter value of a=%d b=%d ",a,b);
    return 0;
}
