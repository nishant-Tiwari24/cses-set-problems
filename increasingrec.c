#include<stdio.h>
int increasing(int x,int n)
{
    if(x>=n)
    return ;
    else
    printf("%d\n",x);
    return increasing(x+1,n);
}

int main()
{
    int n=0,inc;
    printf("Enter the value: ");
    scanf("%d",&n);
    inc=increasing(1,n);
    printf("%d",inc);

}