def merge(array, left, right):
    i = j = k = 0
    while i < len(left) and j < len(right):
        if left[i] < right[j]:
            array[k] = left[i]
            i += 1
        else:
            array[k] = right[j]
            j += 1
        k += 1
    while i < len(left):
        array[k] = left[i]
        i += 1
        k += 1
    while j < len(right):
        array[k] = right[j]
        j += 1
        k += 1


def merge_sort(array):
    if len(array) < 2:
        return
    mid = len(array) // 2
    left, right = array[:mid], array[mid:]
    merge_sort(left)
    merge_sort(right)
    merge(array, left, right)


number_list = [5, 78, 88, 2, 48, 50, 33, 74]
print("UNSORTED LIST =", number_list)
# UNSORTED LIST = [5, 78, 88, 2, 48, 50, 33, 74]
merge_sort(number_list)
print("SORTED LIST =", number_list)
# SORTED LIST = [2, 5, 33, 48, 50, 74, 78, 88]
