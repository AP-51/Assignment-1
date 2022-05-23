import random
l= [1,0]
m=[2,3]
c12=0
c13=0
c02=0
c03=0
for i in range(1,1000000):
   a= random.choices(l,weights= [0.02, 0.98])
   b=random.choices(m,weights=[0.95,0.05])
   if (a[0]==1 and b[0]==2):
     c12+=1
   if (a[0]==1 and b[0]==3):
     c13+=1
   if (a[0]==0 and b[0]==2):
     c02+=1
   if (a[0]==0 and b[0]==3):
     c03+=1
p=c12+c03
print(c12/p)     
     

