package main

import (
    "fmt"
)

var toBeSorted = []int{21, 50, 12, 31, 61, 40, 30}

func bubbleSort(input []int) {
    n := len(input)
    swapped := true

	for swapped {
        swapped = false
        for i := 1; i < n; i++ {
            if input[i-1] > input[i] {
                input[i], input[i-1] = input[i-1], input[i]

                swapped = true
            }
        }
    }
    // print out the sorted list
    fmt.Println(input)
}

func main() {
    fmt.Println(toBeSorted)
    bubbleSort(toBeSorted)
}