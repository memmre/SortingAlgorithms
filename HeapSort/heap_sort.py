def heapify(array, n, i):
    largest, left, right = i, 2 * i + 1, 2 * i + 2
    if left < n and array[left] > array[largest]:
        largest = left
    if right < n and array[right] > array[largest]:
        largest = right
    if largest != i:
        array[i], array[largest] = array[largest], array[i]
        heapify(array, n, largest)


def heap_sort(array):
    length = len(array)
    for i in range(length // 2 - 1, -1, -1):
        heapify(array, length, i)
    for i in range(length - 1, 0, -1):
        array[0], array[i] = array[i], array[0]
        heapify(array, i, 0)


number_list = [40, 2, 9, 75, 55, 19, 65, 85]
print("UNSORTED LIST =", number_list)
# UNSORTED LIST = [40, 2, 9, 75, 55, 19, 65, 85]
heap_sort(number_list)
print("SORTED LIST =", number_list)
# SORTED LIST = [2, 9, 19, 40, 55, 65, 75, 85]
