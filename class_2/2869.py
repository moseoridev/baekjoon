from math import ceil

A, B, V = map(int, input().split())
c = 0
print(ceil((V-B) / (A-B)))
