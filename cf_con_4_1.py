test=int(input())
for i in range(test):
    i,j,r,c=input().split()
    i=int(i)
    j=int(j)
    r=int(r)
    c=int(c)
    matrix=[]
    c1=[]
    c2=[]
    f=[]
    for n in range(i):
        l=input()
        l=[str(n) for n in l]
        matrix.append(l)
    for n in range(j):
        if matrix[r-1][n]=="B":
            c1.append(1)
    for n in range(i):
        if matrix[n][c-1]=="B":
            c2.append(1)
    for n in range(i):
        for k in range(j):
            if matrix[n][k] !="B":
                f.append(-1)
    if matrix[r-1][c-1]=="B":
        print(0)
    elif len(c1)>=1:
        print(1)
    elif len(c2)>=1:
        print(1)      
    elif len(f)==i*j: 
        print(-1) 
    else:
        print(2)

