/* 本代码使用“康托展开” */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* 库函数qsort使用的比较函数 */
int cmp(const void *a, const void *b)
{
    return *(char *)a - *(char *)b;
}

int main()
{
    char str[20];
    int i, n, m, fact[20] = {1};
    for (i = 1; i <= 10; i++)
        fact[i] = fact[i - 1] * i; //计算1~10的阶乘

    while (scanf("%s%d", str, &m) == 2)
    {
        n = strlen(str);
        qsort(str, n, 1, cmp); //给字符串排序
        while (n--)
        {
            int t = m / fact[n];
            putchar(str[t]); //输出第m个排列的一个字符
            m %= fact[n]; //剩下m % fact[n-1] 个排列(前面n--了)
            for (i = t; str[i]; i++) //去掉被输出的字符
                str[i] = str[i + 1]; 
        }
        putchar('\n');
    }
    return 0;
}

