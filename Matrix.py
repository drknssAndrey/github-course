op = str(input())
ls = int(input())
om = int(input())
som = 0
for i in range(om):
    l = [int (j) for j in input().split()]
    #print(l[i:om])
    som += sum(l[i+1:]) if op == "acima" else sum(l[0:i])
#print(som)
print(som>ls)

