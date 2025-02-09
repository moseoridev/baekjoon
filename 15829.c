#include <stdio.h>
#include <math.h>

int main()
{
    int L;
    scanf("%d", &L);

    char s[51];
    scanf("%s", s);

    const long long MOD = 1234567891;
    long long hash = 0;
    long long power = 1;

    for (int i = 0; i < L; i++)
    {
        int num = s[i] - 'a' + 1;
        hash = (hash + num * power) % MOD;
        power = (power * 31) % MOD;
    }

    printf("%lld", hash % 1234567891);
}