// ��д����ʵ�֣�ģ���û���¼�龰������ֻ�ܵ�¼���Ρ�
// ��ֻ���������������룬���������ȷ����ʾ
// ��¼�ɹ���������ξ�����������˳�����
#include<stdio.h>
#include <string.h>
int main()
{
    int i=0;
    char password_right[25]="abcdef";
    for(i=0;i<3;i++)
    {char password_input[20];
    printf("���������룺");
    scanf("%s",password_input);
    //password��һ����ַ�����Բ��ü�&
    // if (password_input == password_right)
    //==˫�ȺŲ��������Ƚ������ַ����Ƿ���ȣ�Ӧ����һ���⺯��strcmp
    if(strcmp(password_input,password_right)==0)
    {
        printf("��¼�ɹ�");
        i=4;
        break;
    }
    else
    {printf("�������\n");}
    }
    if (3==i)
    {printf("��������������˳�����\n");}
    return 0;
}