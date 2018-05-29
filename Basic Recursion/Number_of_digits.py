"""
Given the code to find out and return the number of digits present in a number recursively
"""

def count(n):
    if(n<10):
        return 1
    
    smallOutput = count(n/10)
    return smallOutput + 1
    
print count(156)