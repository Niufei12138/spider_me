#include<stdio.h>
extern int Add(int,int);
int main()
{
    int a=10;
    int b=20;
    int sum=Add(a,b);
    printf("%d",sum);

    return 0;
}