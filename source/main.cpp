#include <iostream> //Standart input and output header file
#include <vector> //Header file for vectors
#include <sstream> //Header file for istringstream
#include "functionHeader.h" //Header file of my function prototypes

using namespace std;

int main() {
    //Prompts the user for a sequence of numbers
    cout << "Enter a sequence of numbers: ";
    string input;
    getline(cin, input); //Sses getline to retrieve the input since there is going to be space

    //Retrieves the input and store it in a vector with a loop
    vector<int> originalSequence;
    int num;
    istringstream iss(input);
    while (iss >> num) {
        originalSequence.push_back(num);
    }

    //Makes three copies
    vector<int> sequenceCopy1 = originalSequence;
    vector<int> sequenceCopy2 = originalSequence;
    vector<int> sequenceCopy3 = originalSequence;

    //Each function calls
    vector<int> result1 = bubbleSort(sequenceCopy1); 
    vector<int> result2 = quickSort(sequenceCopy2); 
    vector<int> result3 = selectionSort(sequenceCopy3); 

    // Display the sorted array
    cout << "Bubble Sort: ";
    for (int num : result1) {
        cout << num << " ";
    }
    cout << endl;

    cout << "Quick Sort: ";
    for (int num : result2) {
        cout << num << " ";
    }
    cout << endl;

    cout << "Selection Sort: ";
    for (int num : result3) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
