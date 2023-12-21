#include<stdio.h>
int increasing(int n)
{
    if(n==0){
    return n;
    printf("%d\n",n);}
    else{
    increasing(n-1);}
    return printf("%d\n",n);
}
int main()
{
    int n,inc;
    printf("Enter a value: ");
    scanf("%d",&n);
    increasing(n);
}