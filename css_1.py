a,x=map(int,input().split())
l=input().split()
l=[int(i) for i in l]
for i in range(len(l)):
    if l[i]<x:
        diff=abs(l[i]-x)
        if diff in l[(l[i]):]:
            print((l.index(l[i]+1)),(l.index(diff)+1))
            exit()
        else:
            continue
    
print("IMPOSSIBLE")