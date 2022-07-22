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
    printf("请输入密码：>");
    scanf("%s",password);
    printf("请确认（Y/N）:>");
    // 输入123456+回车（\n）
    getchar();
    ret =getchar();
    if (ret=='Y')
    {
        printf("确认成功\n");
    }
    else
    {
        printf("确认放弃\n");
    }
    return 0;
}