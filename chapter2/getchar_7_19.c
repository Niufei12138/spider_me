#include <stdio.h>
// int main()
// {
//     int ch=0;
//     while ((ch=getchar())!=EOF)
//     {
//         putchar(ch);
//     }
//     return 0;
// }


int main()
{
    int ret=0;
    char password[20]={0};
    printf("���������룺>");
    scanf("%s",password);
    printf("��ȷ�ϣ�Y/N��:>");
    // ����123456+�س���\n��
    getchar();
    ret =getchar();
    if (ret=='Y')
    {
        printf("ȷ�ϳɹ�\n");
    }
    else
    {
        printf("ȷ�Ϸ���\n");
    }
    return 0;
}