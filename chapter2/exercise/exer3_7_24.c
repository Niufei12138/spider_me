// 1. ���� n�Ľ׳ˡ�
#include<stdio.h>
int main()
{
    int num;
    int i=1;
    int result=1;
    printf("������׳�����");
    scanf("%d",&num);
    // while (i<=num)
    // {result=result*i;
    // i++;
    // }
    for(i=1;i<=num;i++)
    {result*=i;}
    printf("�����%d",result);
    return 0;
}