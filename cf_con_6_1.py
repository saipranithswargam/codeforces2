test=int(input())
for i in range(test):
    n=int(input())
    a=input().split()
    a=[int(i) for i in a]
    b=input().split()
    b=[int(i) for i in b]
    am=max(a)
    bm=max(b)
    if am>=bm:
        for i in range(n):
            if a[i]<b[i]:
                temp=a[i]
                a[i]=b[i]
                b[i]=temp
    elif bm>=am:
        for i in range(n):
            if a[i]>b[i]:
                temp=a[i]
                a[i]=b[i]
                b[i]=temp
    am=max(a)
    bm=max(b)
    print(am*bm)

