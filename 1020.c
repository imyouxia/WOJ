#include <stdio.h>

int main()
{
    int nCase;
    scanf("%d", &nCase);
    while(nCase--)
    {
      int ans, left = -10, right = 10, mid, y;
      scanf("%d", &y);
      while (left + 1 < right)
      {
          mid = (left + right) / 2;
          ans = 2 * mid * mid * mid - 4 * mid * mid + 3 * mid - 6;
          if (ans == y)
              break;
          else if (ans > y)
              right = mid;
          else 
              left = mid;
      }

      if (ans != y)
          printf("NULL\n");
      else
          printf("%d\n", mid);
    }
    return 0;
}
