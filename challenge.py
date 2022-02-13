num=(input())
while(True):
    l=[int(i) for i in num]
    k=sum(l)
    if k%4==0:
        print(num)
        break
    elif k%4!=0:
        num=int(num)+1
        num=str(num)
        l.clear()
        


    
