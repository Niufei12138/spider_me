#include <stdio.h>
int main()
{
    int a=0;
    while (a<20000)
    {
        a++;
        if (a%2==0)
            {printf("��ӡ����: %d",a);}
        else
            {printf("��ӡ����: %d\n",a);}

    }
    
    return 0;
}