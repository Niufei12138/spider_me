// �������
// #include <stdio.h>
// int main()
// {
//     int a;
//     printf("���������ڼ�����д���֣���");
//     scanf("%d",&a);
//     switch (a)
//     {
//     case 1:
//         printf("����һ");
//         break;
//     case 2:
//         printf("���ڶ�");
//         break;
//     case 3:
//         printf("������");
//         break;
//     case 4:
//         printf("������");
//         break;
//     case 5:
//         printf("������");
//         break;
//     case 6:
//         printf("������");
//         break;
//     case 7:
//         printf("������");
//         break;
//     }
//     return 0;
// }


// �������ڼ������������/��Ϣ��
#include <stdio.h>
int main()
{
    int a;
    printf("���������ڼ�����д���֣���");
    scanf("%d",&a);
    switch (a)
    {
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
        printf("������");
        break;
    case 6:
    case 7:
        printf("��Ϣ��");
        break;
    }
    return 0;
}   