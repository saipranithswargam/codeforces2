test=int(input())
for i in range(test):
    string=input()
    string=[str(i) for i in string]
    string.sort()
    s="".join([str(i) for i in string])
    print(s)
    