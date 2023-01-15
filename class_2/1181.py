N = int(input())
l = []
m = 1
for _ in range(N):
    i = input()
    l.append(i)
l = list(set(l))
l.sort()
l.sort(key=len)
for i in l:
    print(i)
