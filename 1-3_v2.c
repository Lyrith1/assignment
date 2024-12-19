#include <stdio.h>

int main()
{
    long long a, i, j;
    long long sum = 0;
    for(i = 1; i < 21; i++)     //计算1-20的阶乘 
    {
        a = 1;
        for(j = i; j > 0; j--)  //单独计算每个数的阶乘
        {
            a *= j;
        }
        sum += a;               //相加
        printf("%lld\n", a);    //输出每个数的阶乘
    }
    printf("sum = %lld", sum);
    scanf("1");                 //waiting to end
    return 0;
}