#include <stdio.h>

int main()
{
    int a = 0, b = 0, c = 0;
    while (1)
    {
        scanf("%d %d %d", &a, &b, &c);
        if (a == 0 && b == 0 && c == 0)
        {
            break;
        }

        int sum_of_squared = a * a + b * b + c * c;
        int max = a;

        if (b > max)
        {
            max = b;
        }
        if (c > max)
        {
            max = c;
        }

        if (sum_of_squared == 2 * max * max)
        {
            printf("right\n");
        }
        else
        {
            printf("wrong\n");
        }
    }

    return 0;
}