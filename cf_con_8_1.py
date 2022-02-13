test=int(input())
for i in range(test):
    n=int(input())
    if n%7==0:
        print(n)
    else:
        hig=(int(n/7)+1)*7
        lo=int(n/7)*7
        if (len(str(n))==1):
            print(7)
        elif (len(str(n))==2):
            h=str(hig)
            l=str(lo) 
            k=str(n)
            if h[0]==k[0]:
                print(hig)
            else:
                print(lo)
        else:
            h=str(hig)
            l=str(lo)
            k=str(n)
            if (h[0]==k[0]) and (h[1]==k[1]):
                print(hig)
            else:
                print(lo)       