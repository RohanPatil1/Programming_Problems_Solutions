"""
Given an array of length N and an integer x, you need to find and return the first index of integer x present
 in the array. Return -1 if it is not present in the array.
First index means, the index of first occurrence of x in the input array.
Do this recursively. Indexing in the array starts from 0
"""

arr=list() #Array
def first_Index(arr,size,x):
    if(size==0):
        return -1
    
    if(arr[0]==x):
        return 0
    
    smallOutput  = first_Index(arr[1:],size-1,x)
    if(smallOutput <> -1):
        return smallOutput + 1
    else:
        return smallOutput

array=[1,2,3,4,5,6,5,7,5]
print first_Index(array,9,5)