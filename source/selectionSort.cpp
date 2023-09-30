#include "functionHeader.h" //The header for function prototypes
#include <vector> //Vector library

std::vector<int> selectionSort(std::vector<int>& arr) {
    std::vector<int> sortedArr = arr; //Makes a copy of the input vector

    int n = sortedArr.size(); //Gets the size of the vector

    for (int i = 0; i < n - 1; i++) { //Loops through each element until the last member
        int minIndex = i; //Current member declaration

        for (int j = i + 1; j < n; j++) { //Loops through the unsorted part of the vector
            if (sortedArr[j] < sortedArr[minIndex]) { //When the new number is smaller
                minIndex = j; //Changes the index of the smaller number
            }
        }
        std::swap(sortedArr[i], sortedArr[minIndex]); //Swap the current element with the smaller member
    }

    return sortedArr; //Returns the result
} //the time complexity is O(n^2)
