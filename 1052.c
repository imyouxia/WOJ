/* 别人的代码，本代码使用递归(回溯)枚举直到找到第m个序列 */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char key[20], seq[20];
int N, M, cnt;
int used[20];

int permutation(int i)
{
    if (i == N) //填完序列
    {
        if (cnt == M) {
            seq[i] = '\0';
            puts(seq);
            return 1;
        }
        cnt++;
        return 0;
    }
    int j;
    for (j = 0; j < N; j++)
    {
        if (used[j] == 0) //找到一个没被用过的字符
        {
            used[j] = 1; //标记已使用
            seq[i] = key[j];
            if (permutation(i + 1)) //填下一个字符
                return 1; //如果找到了 就结束循环
            used[j] = 0; //回溯：剩下的字符还可以再用它
        }
    }
    return 0;
}

/* 库函数qsort使用的比较函数 */
int cmp(const void *a, const void *b)
{
    return *(char *)a - *(char *)b;
}

int main()
{
    while (scanf("%s%d", key, &M) == 2)
    {
        N = strlen(key);
        qsort(key, N, 1, cmp); // 给字符串排序
        cnt = 0;
        memset(used, 0, sizeof(used)); //标记所有字符都没被使用过
        permutation(0);
    }
    return 0;
}
