// for(���ʽ1; ���ʽ2; ���ʽ3)
// ѭ�����;
#include<stdio.h>
int main()
{
    int i=0;
    for (i=1;i<=50;i+=1)
    {
        if(i<20&&i>10)
            {
                continue;
            }
        printf("%d\n",i);
    }
    return 0;
}