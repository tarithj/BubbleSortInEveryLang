#include "bubble.h"
#include<iostream>
using namespace std;
int main(){
    int arr[] = {21, 50, 12, 31, 61, 40, 30};
    int n = sizeof(arr)/sizeof(int);
    bubble_sort(arr,n);
    for (int i = 0; i < n;i++)
    {
        cout << arr[i] << ' ';
    }
    return 0;
}