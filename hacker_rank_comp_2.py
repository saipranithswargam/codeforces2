test=int(input())
for i in range(test):
    n,m=map(int,input().split())
    matrix=[]
    for a in range(n):
        k=input().split()
        k=[int(i) for i in k]
        matrix.append(k)
        i=0
        j=0
        count=matrix[0][0]
    while(True):
        if sum(matrix[i][j:m])>sum(matrix[i:n][j]):
            j+=1
            count+=matrix[i][j]
        elif sum(matrix[i][j:m])<sum(matrix[i:n][j]):
            i+=1
            count+=matrix[i][j]
        if i==n-1 and j==m-1:
            break
    print(count)
