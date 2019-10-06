def fat(a):
    if a == 0:
        return 1
    else:
        return a * fat(a-1)


s = 0
x = int(input())
for c in range(x):
    s += 1/fat(c)
print("%.15f"%s)
