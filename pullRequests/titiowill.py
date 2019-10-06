import math

def WillyFunc(n):
    if n <= 9:
        return n * (2 if n%2 == 0 
        else 3)
    else:
        log = int(math.log10(n))
        nc = n//10**log
        return WillyFunc(n - (nc)*10**log) + (nc * (2 if nc%2 == 0 else 3) *(log+1))


while True:
    a = int(input())
    if a == 0:
        break
    else:
        print(WillyFunc(a))
