test=int(input())
for i in range(test):
    n=int(input())
    l=input().split()
    l=[int(i) for i in l]
    res=[]
    a=max(l)
    l.remove(a)
    b=sum(l)/len(l)
    r=a+b
    l.append(a)
    res.append(r)
    # c=min(l)
    # l.remove(c)
    # d=sum(l)/len(l)
    # r2=res.append(d)
    e=max(res)
    print('%.9f'%e)#for setting precision 
    res.clear()

