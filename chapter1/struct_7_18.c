#include<stdio.h>
struct Book
{
    char name[100];
    short price;
};
// �õ�ַ��ӡ
// int main()
// {
//     struct Book b1={"C���Գ������",55};
//     struct Book* pb=&b1;
//     printf("%s\n",(*pb).name);
//     printf("%d\n",(*pb).price);
//     return 0;
// }


// ����ʹ��
// int main()
// {
//     struct Book b1={"��C���Գ������",55};//��
//     // Book�ṹ����b1��ʹ���ܹ��洢��������
//     printf("������%s\n",b1.name);
//     // ��ȡb1�е�name
//     printf("�۸�%d\n",b1.price);
//     b1.price=15;//�޸ļ۸�
//     printf("�¼۸�%d\n",b1.price);
//     return 0;
// }

// ������������name�����Ӧ������
#include<string.h>
int main()
{
    struct Book b1={"C���Գ������",55};
    strcpy(b1.name,"C++");
    // string copy:�����ַ���������b1.name��
    // ����һ���⺯������Ҫͷ�ļ�
    printf("������:%s\n",b1.name);
    return 0;
}