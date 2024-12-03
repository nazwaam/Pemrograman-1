n, s =input().split()
n = int(n)
for x in range(1, 51):
    if x % n == 0:
        print(s, end=" ")
        continue
    print(x, end=" ")