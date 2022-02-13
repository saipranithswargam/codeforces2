test_cases=int(input())
for n in range(test_cases):
    ask=int(input())
    lis=input().split()
    update=[int(a) for a in lis]
    update2=set(update)
    count=len(update2)
    for i in update2:
        if i!=0:
            dup=update.count(i)
            if dup>=2:
                count=count+1
    print(count)
