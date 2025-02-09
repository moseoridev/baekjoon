#include <stdio.h>

int main()
{
    int n = 0;
    scanf("%d", &n);

    int answer = 1;
    int interval = 0;
    int end = 1;
    while (n > end)
    {
        interval += 6;
        end += interval;
        answer += 1;
    }

    printf("%d\n", answer);
}