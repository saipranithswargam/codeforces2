t=int(input())
for i in range(t):
    n=int(input())
    m=input().split()
    m=[int(i) for i in m]
    k=[int(i) for i in m]
    m.sort()
    if m==k:
        print("NO")
    else:
        print("YES")
