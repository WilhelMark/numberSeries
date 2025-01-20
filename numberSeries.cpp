#include <iostream>
using namespace std;

int main() {
    // Initialize an array of 15 positive integers
    // The array contains 14 consecutive numbers starting from X, with one number repeated
    int numbers[15] = {114, 111, 106, 107, 108, 105, 115, 108, 110, 109, 112, 113, 116, 117, 118};

    // Output the initialized array
    cout << "Initialized array: ";
    for (int i = 0; i < 15; i++) {
        cout << numbers[i] << " ";
    }
    cout << endl;

    // Step 1: Calculate the sum of all elements in the array
    int sumArray = 0;
    for (int i = 0; i < 15; i++) {
        sumArray += numbers[i];
    }

    // Step 2: Find the minimum number in the array (this will be X)
    int minNumber = numbers[0];
    for (int i = 1; i < 15; i++) {
        if (numbers[i] < minNumber) {
            minNumber = numbers[i];
        }
    }

    // Step 3: Calculate the expected sum of the first 14 consecutive integers starting from X
    int expectedSum = 0;
    for (int i = 0; i < 14; i++) {
        expectedSum += (minNumber + i);
    }

    // Step 4: The difference between the actual sum and the expected sum is the repeating number
    int repeatingNumber = sumArray - expectedSum;

    // Output the result
    cout << "The repeating number is: " << repeatingNumber << endl;

    return 0;
}
