#include<stdio.h>
int steps(int n)
{
    if(n==1)
    return 1;
    else if(n==2)
    return 2;
    else
    return steps(n-2)+steps(n-1);
    

}
int main()
{
    int n=0;
    printf("The value of n: ");
    scanf("%d",&n);
    int num=steps(n);
    printf("The number of ways to reach %d is %d",n,num);
    
}