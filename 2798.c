#include <stdio.h>

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    int num_arr[n];

    int min_diff = __INT_MAX__;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &num_arr[i]);
    }

    for (int i = 0; i < n - 2; i++)
    {
        if (num_arr[i] >= m)
        {
            continue;
        }
        for (int j = i + 1; j < n - 1; j++)
        {
            for (int k = j + 1; k < n; k++)
            {
                int new_diff = m - num_arr[i] - num_arr[j] - num_arr[k];
                if (new_diff >= 0 && new_diff < min_diff)
                {
                    min_diff = new_diff;
                }
            }
        }
    }

    printf("%d\n", m - min_diff);
}