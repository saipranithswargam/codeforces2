import math
test=int(input())
for i in range(test):
    trades=0
    sticks=1
    x,y,z=map(int,input().split())
    needed=z*y+(z-1)
    trades=int((needed/(x-1)))
    # sticks=trades*(x-1)
    # if sticks==needed:
    #     print(trades+z)
    # elif sticks>needed:
    #     print(trades+z-1)
    # else:
    #     while(sticks<=needed):
    #         trades+=1
    #         sticks=sticks+x-1
    #     print(trades+z)
    trades+=y
    if needed%(x-1)!=0:
        print(trades+1)
    else:
        print(trades)






