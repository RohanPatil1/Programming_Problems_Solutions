"""
Given an array A of random integers and an integer k,
find and return the kth largest element in the array.
"""

n=int(input())
arr = map(int, raw_input().strip().split(' '))
k=int(input())

arr.sort()

print arr[len(arr)-k ]

