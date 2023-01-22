N = int(input())
data = []
for _ in range(N):
    a, b = input().split()
    data.append((int(a), b))
data.sort(key=lambda x: x[0])
for s in data:
    print(s[0], s[1])
