#include <iostream>
#include <unordered_map>

int findUnique(int arr[], int n) {
    int frequency[100] = {0};

    // Count occurrences of each number
    for (int i = 0; i < 100; i++) {
        frequency[arr[i]]++;
    }
    for (int i = 0; i < 100; i++) {
        if (frequency[i] == 1) {
            return i;
        }
    }
    return -1;
}

int main() {
    int arr[] = {2, 3, 5, 4, 5, 3, 2}; // Example array
    int n = sizeof(arr) / sizeof(arr[0]); // Calculate the number of elements in the array

    int uniqueNumber = findUnique(arr, n);
    if (uniqueNumber != -1) {
        std::cout << "The unique number in the array is: " << uniqueNumber << std::endl;
    } else {
        std::cout << "No unique number found in the array." << std::endl;
    }

    return 0;
}