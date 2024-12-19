#include <stdio.h>

int main()
{
    int i, sum = 0, a;
    for(i = 1; i <= 100; i++)
    {
        a = i;
        if(a % 2 == 0)  a *= -1;    //判断奇偶，从而加减
        sum += a;                   //求和
    }
    printf("%d", sum);
    scanf("1");                     //waiting to end
    return 0;
}