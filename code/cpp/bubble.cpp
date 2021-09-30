#include "bubble.h"

void bubble_sort(int arr[], int len)                 // Implenting Bubble sort in c++
{
    bool is_sorted = true;                          //Checkes if array is already sorted or not
    for (int i = 0; i < len; i++)
    {
        for (int j = 0; j < len-i-1; j++)
        {
            if(arr[j]>arr[j+1])
            {
                is_sorted = false;
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
        if (is_sorted)                                //Breaks if array already sorted
        {
            return;
            break;
        }
    }
}