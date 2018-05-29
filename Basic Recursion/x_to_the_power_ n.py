"""
Write a program to find x to the power n (i.e. x^n). Take x and n from the user. You need to return the answer.
Do this recursively.
"""
def power(x,n):
    if (n==1):
        return 1
    
    return x*power(x,n-1)

print power(2,5)
