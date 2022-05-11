str=input("Enter Outcome of the 3 tosses ")
x=0
for i in str:
    if(i=="H"):
       x+=2
    else:
       x-=1.5
print(f"Value of Random Variable X is {x}")