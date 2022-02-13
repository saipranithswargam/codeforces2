test=int(input())
for i in range(test):
    num_elem=int(input())
    elems=input().split()
    l=[int(i) for i in elems]
    Max=max(l)
    Min=min(l)
    if Max==Min:
        print(0)
    elif (Max>Min):
        print(Max-Min)