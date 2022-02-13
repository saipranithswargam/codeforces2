test=int(input())
li=[]
for i in range(test):
    l,h=map(int,input().split())
    for i in range(l,h+1):
        count=0
        for k in range(2,i):
            if i%k==0:
                count+=1
                break
        if (count==0) and (i!=1):
            li.append(i)
for i in range(len(li)):
    print(li[i])