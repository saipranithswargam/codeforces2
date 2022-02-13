n=int(input())
for x in range(n):
    string=input()
    if len(string)>10:
       first=string[0]
       last=string[-1]
       count=len(string)-2
       print(first,count,last,sep="")
    else:
        print(string)