#include<stdio.h>
int maze(cr,cc,er,ec)
{
    int RightCalls=0,DownCalls=0,TotalWays;
    if(cr==er && cc==ec)
        return 1;
    if(cr==er)
    {
        RightCalls += maze(cr,cc+1,er,ec);
    }
    if(cc==ec)
    {
        DownCalls += maze(cr+1,cc,er,ec);
    }
    if(cr<er && cc<ec)
    {
        RightCalls += maze(cr,cc+1,er,ec);
        DownCalls += maze(cr+1,cc,er,ec);
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
    int noofways=maze(1,1,n,m);
    printf("%d",noofways);
    return 0;
}