#include <stdio.h>
int main()
{
    int i=1;
    do 
    {
        if(5==i)
       {continue;}//{break;}
        printf("%d����",i);
        i++;
    }//��������ִ�����жϣ�����do�е��������ִ��һ��
    while (i<=10);
    return 0;
}