test=int(input())
for i in range(test):
    n=(input())
    l=[str(i) for i in n]
    # l=set(l)
    l=list(l)
    # if "0" in l:
    #     l.remove("0")
    # if "1" in l:
    #     l.remove("1")
    # if "8" in l:
    #     if "2" in l:
    #         l.remove("2")
    #     if "4" in l:
    #         l.remove("4")
    # if "9" in l:
    #     if "3" in l:
    #         l.remove("3")
    # # print(l)
    count=0
    n=int(n)
    j=0
    while(count!=len(l)):
        if l[j]!=0:
            if  n%int(l[j])==0:
                count+=1
                j+=1
            else:
                count=0
                n+=1
                j=0
    print(n)
