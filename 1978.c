#include <stdio.h>

int is_prime(int n) // 6k 소수 판별법
{
    if (n <= 3)
    {
        return n > 1;
    }
    if (n % 2 == 0 || n % 3 == 0)
    {
        return 0;
    }

    int i = 5;
    while (i * i <= n)
    {
        if (n % i == 0 || n % (i + 2) == 0)
            return 0;
        i += 6;
    }
    return 1;
}

int main()
{
    int n = 0;
    scanf("%d", &n);

    int num_arr[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &num_arr[i]);
    }

    int answer = 0;

    for (int i = 0; i < n; i++)
    {
        answer += is_prime(num_arr[i]);
    }
    printf("%d\n", answer);

    return 0;
}