#include<stdio.h>
int power1(int a,int b)
{
    if(b==1)
     return a;
    else 
     return a*power1(a,b-1);
}
int main()
{
    int a,b,pow;
    printf("The value of a: ");
    scanf("%d",&a);
    printf("The value of b: ");
    scanf("%d",&b);
    pow=power1(a,b);
    printf("%d to the power %d is %d",a,b,pow);

return 0;    
}