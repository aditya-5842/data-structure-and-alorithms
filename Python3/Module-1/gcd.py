"""
This file is to find the GCD of given two inputs
"""
def GCD(m,n):
    if m<n:
        temp = m
        m = n
        n = temp
    temp = m%n
    while temp != 0:
        m = n
        n = temp
        temp = m%n
    return n

def main():
    print("Give inputs m,n: ")
    m,n = [int(i) for i in input().split(" ")]
    print(GCD(m,n))

if "__name__"="__main__":
    main()
