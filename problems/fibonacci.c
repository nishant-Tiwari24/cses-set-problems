#include<stdio.h>
int fibonacci1(int n)
{
    if(n==1 || n==2)
    return 1;
    else
    return fibonacci1(n-2)+fibonacci1(n-1);
}

void series(int n)
{
    if(n==1){
        printf("%d , ",fibonacci1(n));
    }
    else{
        printf("%d , ",fibonacci1(n));
        series(n-1);
    }
}
int main()
{
    int a;
    printf("The value of a: ");
    scanf("%d",&a);
    series(a);
    return 0;
}