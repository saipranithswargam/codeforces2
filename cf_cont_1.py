test=int(input())
for i in range(test):
    n,k=input().split()
    n=int(n)
    k=int(k)
    if n%2!=0:
        if (n+1)/2>=k:
            for i in range(n):
                if i%2==0:
                    if k>0:
                        stri="."*(n-1)
                        want=stri[:i]+"R"+stri[i:]
                        print(want)
                        k=k-1
                    else:
                        print("."*n)
                else:
                    print("."*n)
        else:
            print(-1)
    elif n%2==0:
        if n/2>=k:
            for i in range(n):
                if i%2==0:
                    if k>0:
                        stri="."*(n-1)
                        want=stri[:i]+"R"+stri[i:]
                        print(want)
                        k=k-1
                    else:
                        print("."*n)
                else:
                    print("."*n)
        else:
            print(-1)


