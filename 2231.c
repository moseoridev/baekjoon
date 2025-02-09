#include <stdio.h>

int get_answer(int n)
{
    for (int i = 1; i < n; i++)
    {
        int sum = 0;
        int num = i;
        while (num > 0)
        {
            sum += num % 10;
            num /= 10;
        }
        if (i + sum == n)
        {
            return i;
        }
    }
    return 0;
}

int main()
{
    int n = 0;
    scanf("%d", &n);

    printf("%d\n", get_answer((n)));
    return 0;
}