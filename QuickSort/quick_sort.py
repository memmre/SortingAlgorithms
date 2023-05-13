def partition(array, low, high):
    pivot = array[high]
    i = low - 1
    for j in range(low, high):
        if array[j] <= pivot:
            i += 1
            array[i], array[j] = array[j], array[i]
    array[i + 1], array[high] = array[high], array[i + 1]
    return i + 1


def quickSort(array, low, high):
    if low < high:
        pi = partition(array, low, high)
        quickSort(array, low, pi - 1)
        quickSort(array, pi + 1, high)


number_list = [11, 58, 10, 64, 25, 37, 66, 57]
print("UNSORTED LIST =", number_list)
# UNSORTED LIST = [11, 58, 10, 64, 25, 37, 66, 57]
quickSort(number_list, 0, len(number_list) - 1)
print("SORTED LIST =", number_list)
# SORTED LIST = [10, 11, 25, 37, 57, 58, 64, 66]
