N, K = map(int, input().split())
K = min(K, N-K)
r = 1
for i in range(K):
    r = r * (N-i) / (i+1)
print(int(r))
