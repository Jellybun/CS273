#include "functionHeader.h" //Includes the header for function prototypes

#include <vector> //Vector library

std::vector<int> bubbleSort(std::vector<int>& arr) {
    std::vector<int> sortedArr = arr; //Makes a copy of the input
    int n = sortedArr.size(); //Gets the size of the vector
    bool swapped; //To check if any member is swapped during the iteration

    for (int i = 0; i < n - 1; i++) { //Outer loop
        swapped = false; //Declare the swap identifier
        for (int j = 0; j < n - i - 1; j++) { //Inner loop
            if (sortedArr[j] > sortedArr[j + 1]) { //Compare members
                std::swap(sortedArr[j], sortedArr[j + 1]); //Swap them in order
                swapped = true; //Change the identifier
            }
        }
        if (!swapped) {
            //For the case when the array is already sorted
            break;
        }
    }
    return sortedArr; //Returns the result
} //the time complexity of the function is O(n^2)
