M,N = 3,4
ls = []
for i in range(M):
    l = []
    for j in range(N):
        l.append(i+j)
    ls.append(l)

for i in range(M):
    print("Row {}: {}".format(i, ls[i]))
