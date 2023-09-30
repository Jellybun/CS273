#include <vector> //Vector library

std::vector<int> quickSort(std::vector<int>& arr) {
    //Base case: If the array is already sorted.
    if (arr.size() <= 1) {
        return arr; 
    }
    int pivot = arr[0]; //Chooses a pivot element
    std::vector<int> less, greater; //Creates vectors to store members bigger and smaller than the pivot.

    for (size_t i = 1; i < arr.size(); i++) {
        if (arr[i] <= pivot) {
            less.push_back(arr[i]); //If the member is smaller than or equal to the pivot, add it to 'less'.
        } else {
            greater.push_back(arr[i]); //If the member is bigger than the pivot, add it to 'greater'.
        }
    }
    //Recursively sort the 'less' and 'greater' vectors.
    less = quickSort(less); 
    greater = quickSort(greater); 

    // Combine 'less', pivot, and 'greater' to get the main sorted array.
    std::vector<int> sortedArr;
    sortedArr.insert(sortedArr.end(), less.begin(), less.end()); //Add members from 'less'.
    sortedArr.push_back(pivot); // Add the pivot.
    sortedArr.insert(sortedArr.end(), greater.begin(), greater.end()); //Add members from 'greater'.

    return sortedArr; //Returns the result
} //The time complexity for the function is potentially O(nlogN) for the best case whereas it's O(n^2) for the worst case
