import numpy as np

def linearsearch(arr, item):
    for i, element in enumerate(arr):
        if element == item:
            return i
    return False

def binarysearch(arr, item):
    left, right = 0, len(arr) - 1
    while left <= right:
        mid = (left + right) // 2
        if arr[mid] == item:
            return mid
        elif arr[mid] < item:
            left = mid + 1
        else:
            right = mid - 1
    return False
            
    
if __name__ == "__main__":
    arr = np.arange(12, 45)
    
    if linearsearch(arr, 20):
        print(f"It is at index: {linearsearch(arr,20)}")
    else:
        print("Its not in the list")
    
    if binarysearch(arr, 20):    
        print(f"it is at index: {binarysearch(arr, 20)}")
    