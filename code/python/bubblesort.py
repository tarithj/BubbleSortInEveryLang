def bubble_sort(array):
    array_length = len(array)
    temp = 0
    for i in range(array_length - 1):
        for j in range(array_length - i - 1):
            if array[j] > array[j + 1]:
                temp = array[j + 1]
                array[j + 1] = array[j]
                array[j] = temp
    return array
