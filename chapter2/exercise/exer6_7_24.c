#include<stdio.h>//4. ��д���룬��ʾ����ַ��������ƶ������м���
#include<windows.h>
#include<stdlib.h>
int main()
{
    char arr1[]="welcome to bit!!!!!";
    char arr2[]="###################";
    printf(arr2);
    int left=0;
    int right=0;
    int sz=sizeof(arr1)/sizeof(arr1[1])-2;
    //sizeof�ѽ�����Ҳ�������ˣ���-2
    //�����滻Ϊ
    // int sz=strlen(arr1)-1
    for (left=0,right=sz;left<=(sz)/2;left++,right--)
    {arr2[left]=arr1[left];
    arr2[right]=arr1[right];
    Sleep(1000);
    system("cls");
    // printf("\n");
    printf(arr2);
    }
    return 0;
}