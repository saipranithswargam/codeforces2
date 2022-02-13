test=int(input())
l=[]
for i in range(test):
    num=input()
    for i in range(len(num)-1):
        s=int(num[i])+int(num[i+1])
        s=str(s)
        res=num.replace(num[i:i+2],s)
        l.append(int(res)) 
    print(max(l))
    l.clear()
    