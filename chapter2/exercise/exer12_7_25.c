#include<stdio.h>//��ӡ100~200֮�������
// int main()
// {
//     int i=0;
//     int m;
//     int count;
//     for (i=100;i<=20000;i++)
//     {
//         count=0;
//         for(m=2;m<i;m++)
//         {if(i%m==0)
//         {count=1;
//         break;}}
//         if (count==0)
//         {printf("%d  ",i);}
//     }
//     return 0;
// }

// #include<math.h>//����Ż����������⣬��֪��Ϊɶ������_��
int main()
{
    int i=100;
    int m=2;
    for (i=100;i<=200;i++)
    {
        for(m=2;m<=(sqrt(i));m++)
            {
            if(i%m==0)
                {break;}
            if(m>sqrt(i))
                {printf("%d  ",i);}
            }
    }
    return 0;
}