#include<stdio.h>// 3. ��һ�����������в��Ҿ����ĳ������n
// int main()//����д��
// {
//     int arr[]={1,2,3,4,5,6,7,8,9,10,11};
//     int sz=(sizeof(arr)/sizeof(arr[0]));
//     int k;
//     int i=0;
//     printf("��������ҵ����֣�");
//     scanf("%d",&k);
//     for(i=0;i<sz;i++)
//     {
//         if (k==arr[i])
//         {printf("λ�ñ��Ϊ��%d",i);
//         break;}
//     }
//     if(i==sz)
//     {printf("û�ж�Ӧ�����֡�");}
//     return 0;
// }
int main()//��Ч���ң����ַ�����
{
    int arr[]={1,2,2,5,6,7,8,9,12,13,14,15,16};
    // int arr[]={9,8,7,6,5,4,3,2,1};//�ݲ�֧�ָ�������Ԫ�ز���
    int sz=(sizeof(arr)/sizeof(arr[0]))-1;
    int a=0;//��һ�˵�����
    int k;//����ҵ�����
    int i;//һ�˵�����
    int i0;//���ڴ���һ״̬i����ֵ
    printf("��������ҵ����֣�");
    scanf("%d",&k);
    if (k>=arr[0]&&k<=arr[sz])
    {
            for (i=sz;k!=arr[i];i=i)
    {
        if (i==i0)
        {printf("�޸�����");
            break;}
        i0=i;
        i=(i+a)/2;
        if(k<arr[i])
            {
            if(a<i0)
                {a=a;}
            else
                a=i0;}
        else
            {
            if(a>i0)
                {a=a;}
            else
                a=i0;}
    }
    if(k==arr[i])
    {printf("�����±�Ϊ%d,��Ӧ������Ϊ��%d",i,arr[i]);}}
else
    {printf("�޸����֡�");}
    // printf("%d",sz);
    return 0;
}