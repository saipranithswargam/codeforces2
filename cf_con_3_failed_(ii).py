test=int(input())
for i in range(test):
    a,b,c=input().split()
    a=int(a)
    b=int(b)
    c=int(c)
    if a==b==c:
        print("YES")
    elif (a<b<c) or (c>b>a):
        d=(a+c)/2
        if d%b==0:
            print("YES")
        else:
            print("NO")
    elif b==(a+c)/2:
        print("YES")
    elif ((a==c) and (b>a)):
        print("YES")
    elif (a==b):
        if (c<a):
            print("YES")
        elif(c>a):
            print("NO")
    elif (b==c):
        if(a<b):
            print("YES")
        elif(a>b):
            print("NO")
    elif a!=b!=c:
        d=(a+c)/2
        if d%b==0:
            print("YES")
        else:
            print("NO")
    else:
        print("NO")

        