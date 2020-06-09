# // code for finding the digital root of an intiger
# // number = 12345; 1+2+3+4+5=15; 1+5=6; so output will be 6

def my(n):
    while n>9:
        sum_ = 0
        while n>0:
            n, r = divmod(n,10)
            sum_+=r
        n = sum_
    return n

def main():
    print("Enter the number: ")
    n = int(input())
    print(my(n))

def __name__=="__main__":
    main()
