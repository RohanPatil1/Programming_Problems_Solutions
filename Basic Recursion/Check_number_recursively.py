"""
Given an array of length N and an integer x, you need to find if x is present in the array or not. 
Return true or false.
Do this recursively.
"""

arr=list() #Array
def checkNumber(arr,size,x):
    if(size==0):
        return False
    if(arr[0]==x):
        return True
    
    smallOutput = checkNumber(arr[1:],size-1,x)
    return smallOutput #bool output


array=[1,2,3,4,5,6,7]
print checkNumber(array,7,6)