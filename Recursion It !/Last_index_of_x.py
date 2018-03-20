"""
Given an array of length N and an integer x, you need to find and 
return the last index of integer x present in the array. Return -1 if it is not present in the array.Last index 
means - if x is present multiple times in the array, return the index at which x comes last in the array.
You should start traversing your array from 0, not from (N - 1).
Do this recursively. Indexing in the array starts from 0.
"""

arr=list() #Array
def Last_Index_Of(arr,size,x):
    if(size==0):
        return -1
    
    smallOutput = Last_Index_Of(arr[1:],size-1,x)
    if(smallOutput <> -1):
        return smallOutput + 1

    if(arr[0]==x):
        return 0
    else:
        return -1
        
    

   
array=[1,2,3,4,5,6,5,7,5]
print Last_Index_Of(array,9,5)