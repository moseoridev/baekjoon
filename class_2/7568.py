N = int(input())
data = []
for _ in range(N):
    data.append(tuple(map(int, input().split())))
for s in data:
    a = 1
    for t in data:
        if ((t[0] > s[0]) and (t[1] > s[1])):
            a += 1
    print(a, end=' ')
