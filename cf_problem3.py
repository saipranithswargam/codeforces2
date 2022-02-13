


n,m=input().split()
n=int(n)
m=int(m)
count=0
input_from_user =input() #which is a string '1 2 3 4 5'
numbers = input_from_user.split()
elements=[int(i) for i in numbers]
k=elements[m-1]
for i in elements:
    if i>=k and i!=0:
        count=count+1
print(count) 




    
