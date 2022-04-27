import numpy as np
# take a 3x3 matrix
print("enter two 3by3 matrices")
A = [list(map(int,input().split())) for i in range(3)]
print("\n")
B = [list(map(int,input().split())) for i in range(3)]
result= [[0,0,0],
        [0,0,0],
        [0,0,0]]
 
result = np.array(A)@np.array(B)
print("product matrix is:") 
for r in result:
    print(r)