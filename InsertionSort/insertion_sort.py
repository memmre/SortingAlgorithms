def insertion_sort(array):
    for i in range(0, len(array)):
        for j in range(i, 0, -1):
            if array[j] < array[j - 1]:
                array[j], array[j - 1] = array[j - 1], array[j]
            else:
                break


number_list = [49, 85, 99, 46, 95, 49, 86, 65]
print("UNSORTED LIST =", number_list)
# UNSORTED LIST = [49, 85, 99, 46, 95, 49, 86, 65]
insertion_sort(number_list)
print("SORTED LIST =", number_list)
# SORTED LIST = [46, 49, 49, 65, 85, 86, 95, 99]
