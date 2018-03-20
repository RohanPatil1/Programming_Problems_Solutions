"""
Given an array of length N, you need to find and return the sum of all elements of the array.
"""
a=list() #Array
def SumOfArray(a,n):
    if(n==0):
        return 0
    smallOutput = a[0] + SumOfArray(a[1:],n-1)  #Reduce the size and increment the position each time.
    return smallOutput




arr=[9 ,8 ,9 ,1]
print SumOfArray(arr,4)
