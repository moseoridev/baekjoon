from sys import stdin
input = stdin.readline

N = int(input())
l = [0] * 10001

for _ in range(N):
    t = int(input())
    l[t] += 1

for n in range(len(l)):
    if l[n]:
        for i in range(l[n]):
            print(n)
