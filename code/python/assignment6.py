import random
c1=0
c2=0
n=10000000000
for i in range(1,n) :
    for j in range(1,200):
        x=random.uniform(1,100)
        if (x>0 and x<2):
            c1+=1
    #print(c1)
    if(c1==1):
        c2+=1
        c1=0
    else:
        c1=0
print(c2/n)

