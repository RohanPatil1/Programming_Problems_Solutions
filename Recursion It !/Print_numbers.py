"""
Given the code to print number from 1 to n in increasing order recursively.
 
"""

def printIt(n):
    if(n==0):
        return 0
    printIt(n-1)
    print n,


printIt(16)