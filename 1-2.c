#include <stdio.h>

int main()
{
    int i, sum = 0;
    for(i = 1; i < 201; i++)
    {
        if(i % 3 == 0 && i % 5 != 0) sum += i;      //判断条件
    }
    printf("%d", sum);
    scanf("1");                 //waiting to end
    return 0;
}