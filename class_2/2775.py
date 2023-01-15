T = int(input())
for _ in range(T):
    k = int(input())
    n = int(input())
    l = [x for x in range(1, n+1)]
    for p in range(k):
        for f in range(1, n):
            l[f] += l[f-1]
    print(l[-1])
