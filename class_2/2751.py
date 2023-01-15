import sys
input = sys.stdin.readline

N = int(input())
l = []
for _ in range(N):
    n = int(input())
    l.append(n)

for n in sorted(l):
    print(n)
