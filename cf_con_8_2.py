test=int(input())
for i in range(test):
    s=input()
    s=[str(i)  for i in s]
    a=s.count("1")
    b=s.count("0")
    # if len(s)==2:
    #     print(0)
    if a==b:
        print(b-1)
    elif a>b:
        print(b)
    else:
        print(a)