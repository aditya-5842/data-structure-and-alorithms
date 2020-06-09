"""
function to find all prime numbers which are less than `N`
rule: 2 is only even prime number
      3 is the smallest odd number
      number (`p`) greater than 3 must be checked with following conditions
        I. check all prime numbers i < p, if `i` divides `p` then `p` is a composite number
        II. If there is no such `i` that divides `p` then `p` is prime number
Hack: I. don't check all prime numbers if `p` is divisible by atleast one number
      II. check only till those numbers which are less than are equal to `sqrt(p)`
      III. skip all even numbers
"""
import math

def prime(N):
    """
    assuming N to be greater than or equal to 5:
    it'll return list of all prime numbers less than or equal to N
    """
    ls = [2,3] # first two prime numbers
    for  p in range(5, N+1, 2):
        is_prime = True
        max_possible_divisible = math.ceil(math.sqrt(p))
        for i in ls:
            if i <= max_possible_divisible:
                if p%i==0 :
                    is_prime = False
                    break
            else:
                continue
        if is_prime:
            ls.append(p)
    return ls

print("Input N:", end=" ")
N = int(input())
ls = []

if N==0 or N==1:
    ls.append(None)
elif N == 2:
    ls.append(2)
elif N<=4:
    ls.extend([2,3])
else:
    ls = prime(N)

print("\nPrime numbers less than {} are: ".format(N))
for p in ls:
    print(p, end= " ")
print()
