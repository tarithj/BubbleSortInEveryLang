
def bubblesort(array):
    array_length = len(array)
    temp = 0
    for i in range(array_length):
        for j in range(array_length - 1):
            if array[j] > array[j + 1]:
                temp = array[j + 1]
                array[j + 1] = array[j]
                array[j] = temp
    return array
