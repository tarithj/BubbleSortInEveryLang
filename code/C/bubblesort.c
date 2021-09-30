void bubble_sort(int arr[], int len)                 // Implenting Bubble sort in c++
{
    int is_sorted = 1;                          //Checkes if array is already sorted or not
    for (int i = 0; i < len; i++)
    {
        for (int j = 0; j < len-i-1; j++)
        {
            if(arr[j]>arr[j+1])
            {
                is_sorted = 0;
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
        if (is_sorted == 1)                                //Breaks if array already sorted
        {
            return;
            break;
        }
    }
}