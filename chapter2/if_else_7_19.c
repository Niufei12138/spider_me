#include<stdio.h>
int main()
{
    int age=34;
    if (age<18)
        printf("δ����");
    else if (age<28)
        printf("����\n");
    else if(age<50)
        printf("׳��\n");
    else
        printf("����\n");
    return 0;
}

// #include <stdio.h>
// int main()
// {
//     int age = 50;
//     scanf("%d", &age);
//     if(age<18)
//     {
//     printf("����\n");
//     }
//     else if(age>=18 && age<30)
//     {
//     printf("����\n");
//     }
//     else if(age>=30 && age<50)
//     {
//         printf("����\n");
//     }
//     else if(age>=50 && age<80)
//     {
//     printf("����\n");
//     }
//     else
//     {
//     printf("������\n");
//     }
//     return 0;
// }