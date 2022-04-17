d=int(input("Enter deposit amount per month "))
t=float(input("Enter time duration in years "))
r=int(input("Enter total amount recieved "))
t=t*12
t=int(t)
i=r-(d*t)
j=(i*12)//t
print("Rate of interest per annum is Rs" + str(j))
