test=int(input())
for i in range(test):
    n=int(input())
    l=input()
    l=[int(i) for i in l]
    if l.count(1)>1 or l.count(0)>1:
        print("NO")
    else:
        print("YES")