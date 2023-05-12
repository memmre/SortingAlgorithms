def selection_sort(array):
    for i in range(len(array)):
        minimum_index = i
        for j in range(i, len(array)):
            if array[j] < array[minimum_index]:
                minimum_index = j
        array[i], array[minimum_index] = array[minimum_index], array[i]


number_list = [48, 76, 97, 17, 29, 6, 17, 22]
print("UNSORTED LIST =", number_list)
# UNSORTED LIST = [48, 76, 97, 17, 29, 6, 17, 22]
selection_sort(number_list)
print("SORTED LIST =", number_list)
# SORTED LIST = [6, 17, 17, 22, 29, 48, 76, 97]
