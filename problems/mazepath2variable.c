#include<stdio.h>
int maze(n,m)
{
    int RightCalls=0,DownCalls=0,TotalWays;
    if(n==1 && m==1)
        return 1;
    if(n==1)
    {
        RightCalls += maze(n,m-1);
    }
    if(m==1)
    {
        DownCalls += maze(n-1,m);
    }
    if(n>1 && m>1)
    {
        RightCalls += maze(n,m-1);
        DownCalls += maze(n-1,m);
    }
    
    TotalWays=RightCalls+DownCalls;
    return TotalWays;
   
}
int main()
{
    int n,m;
    printf("The number of rows in maze: ");
    scanf("%d",&n);
    printf("The number of columns in maze: ");
    scanf("%d",&m);
    int noofways=maze(n,m);
    printf("%d",noofways);
    return 0;
}