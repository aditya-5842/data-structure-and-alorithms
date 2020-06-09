import random
M, N = [int(i) for i in input().split(" ")] #take the input size of 2-D matrix

#let's fill random intiger elements in 2-D matrix
A = []
for i in range(M):
    a = []
    for j in range(N):
        a.append(random.randint(0,101))
    A.append(a)
#let's print the matrix
for i in range(M):
    print("Row {}: {}".format(i, A[i]))

B = [] # to store spiral traverse elements
max_peal = min(M//2, N//2)

top, left = 0, 0
bottom, right = M-1, N-1
for peal in range(max_peal):

    #for left column
    for i in range(top, bottom+1):
        B.append(A[i][left])

    # for the bottom Row
    for i in range(left+1, right+1):
        B.append(A[bottom][i])

    #for the right column
    for i in range(bottom-1, top-1,-1):
        B.append(A[i][right])

    # for the top Row
    for i in range(right-1, left, -1):
        B.append(A[top][i])

    # increment and decremen
    top += 1
    bottom -= 1
    left +=1
    right -= 1

# to cover the boundary cases: in case of when M or N or both are odd
# if both are odd, they pealing it'll be left with one un-Traversed element
#   top==bottom and left==right because indexing start at 0
# if bottom>top: one column is left because left == right
# if right>left: one column is left because top == bottom
print(left, right, top, bottom)
if top==bottom and left==right:
    B.append(A[top][left])
elif top < bottom: #case of one column left because left == right
    for i in range(top, bottom+1):
        B.append(A[i][left])
elif left < right: # case of one row left because top==bottom
    for i in range(left, right+1):
        B.append(A[top][i])


print("\nSpiral traversed ele are: ")
for i in range(len(B)-1):
    print(B[i], end = " ")
print(B[i+1])
