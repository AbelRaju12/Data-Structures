def mergesort(arr):
    if len(arr) > 1:
        left_arr = arr[:len(arr)//2]
        right_arr = arr[len(arr)//2:]
        
        #recursion
        mergesort(left_arr)
        mergesort(right_arr)
        
        #merge
        i = 0 # left array index
        j = 0 # right array indec
        k = 0 # merged array index
        while i < len(left_arr) and j < len(right_arr):
            if left_arr[i] < right_arr[j]:
                arr[k] = left_arr[i]
                i += 1
                # k += 1
            else:
                arr[k] = right_arr[j]
                j += 1
                # k += 1
            k += 1
        
        while i < len(left_arr):
            arr[k] = left_arr[i]
            i += 1
            k += 1
        while j < len(right_arr):
            arr[k] = right_arr[j]
            j += 1
            k += 1
            
arr = [1, 7, 0, 8, 5, 2, 4, 2, 9]
mergesort(arr)
print(arr)