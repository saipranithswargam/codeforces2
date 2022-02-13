
n=int(input())
count=0
for ask in range(n):
    p,v,t=input().split()
    a=int(p)
    b=int(v)
    c=int(t)
    if (a==1 and b==1) or (b==1 and c==1) or (c==1 and a==1) or( a==1 and b==1 and c==1):
        count=count+1
print(count)