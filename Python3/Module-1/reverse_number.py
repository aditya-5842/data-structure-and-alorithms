# inverse a given postive intiger number
# e.g. 123 == 321

def rev(n):
    rev_num = 0
    while n>0:
        n, r = divmod(n, 10)
        rev_num = rev_num*10 + r
    return rev_num

def main():
    print("Enter the number: ", end = "")
    n = int(input())
    print("Reversed of the number: ", rev(n))

if "__name__" == "__main__":
    main()
