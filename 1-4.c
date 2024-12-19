#include <stdio.h>

int main()
{
    int n, i, j, a, sum = 0;
    scanf("%d", &n);
    for(i = 1; i <= n; i++)         //从1到n
    {
        a = i;
        for(j = 1; j < i; j++)      //将n变为n……n
        {
            a = a * 10 + i;         //每次都是a乘上10+尾数（即i）
        }                           //如3->33->333，33=3*10+3，333=33*10+3
        sum += a;                   //求和
    }
    printf("%d\n", sum);            //这里sum虽然是double但是不会出错就不转换了
    scanf("%d", &a);                //waiting to end
    return 0;
}