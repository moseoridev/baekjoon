answer = 0
input()


def is_prime(x):
    if x == 1:
        return False
    for i in range(2, int(x**0.5 + 1)):
        if x % i == 0:		# 나눠떨어지는 숫자가 있으면 소수가 아님
            return False
    return True


numbers = map(int, input().split())
for n in numbers:
    if is_prime(n):
        answer += 1
print(answer)
