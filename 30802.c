#include <stdio.h>

int main()
{
    int n = 0;
    scanf("%d", &n);

    int num_of_people_arr[6];
    for (int i = 0; i < 6; i++)
    {
        scanf("%d", &num_of_people_arr[i]);
    }
    int t = 0, p = 0, num_of_t = 0;
    scanf("%d %d", &t, &p);

    for (int i = 0; i < 6; i++)
    {
        num_of_t += num_of_people_arr[i] / t;
        if (num_of_people_arr[i] % t != 0)
        {
            num_of_t += 1;
        }
    }

    printf("%d\n%d %d\n", num_of_t, n / p, n % p);

    return 0;
}