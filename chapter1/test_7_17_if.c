#include <stdio.h>
int main()
{
    int input=0;
    printf("你要好好学习吗？（1/0）：\n");
    scanf("%d",&input);
    if (input==1)
    printf("好offer\n");
    else
    printf("卖红薯");
    return 0;
}