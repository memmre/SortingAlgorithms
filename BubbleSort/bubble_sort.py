def bubble_sort(array):
    for i in range(len(array)):
        for j in range(len(array) - i - 1):
            if array[j] > array[j + 1]:
                array[j], array[j + 1] = array[j + 1], array[j]


number_list = [8, 27, 88, 79, 11, 39, 98, 50]
print("UNSORTED LIST =", number_list)
# UNSORTED LIST = [8, 27, 88, 79, 11, 39, 98, 50]
bubble_sort(number_list)
print("SORTED LIST =", number_list)
# SORTED LIST = [8, 11, 27, 39, 50, 79, 88, 98]
