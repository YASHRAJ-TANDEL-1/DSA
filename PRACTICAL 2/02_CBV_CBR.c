#include<stdio.h>

int callbyvalue(int x, int y)
{
    int temp;
    temp=x;
    x=y;
    y=temp;
    printf("value of and after swapping a = %d , b = %d \n",x,y);    
} 
int callbyreference(int *x, int *y)
{
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
    printf("value of and after swapping is a = %d , b = %d \n",*x,*y);
} 
int main()
{
    int a,b;
    printf("enter the value of a =");
    scanf("%d",&a);
    printf("enter the value of b =");
    scanf("%d",&b);
    printf("value of and before swapping a = %d , b = %d \n",a,b);
    callbyvalue(a,b);
    callbyreference(&a,&b);
    return 0;
}