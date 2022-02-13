num=int(input())
g=input().split()
g=[str(i) for i in g]
l=[]
for i in range(len(g)):
    if g[i-1]==g[i]==2:
        l.append(i)
    
    

