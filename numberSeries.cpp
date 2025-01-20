#include <iostream>
using namespace std;

int main() {
    // Initialize an array of 15 positive integers
    int numbers[15] = {114, 111, 106, 107, 108, 105, 115, 108, 110, 109, 112, 113, 116, 117, 118};

    // Output the initialized array
    cout << "Initialized array: ";
    for (int i = 0; i < 15; i++) {
        cout << numbers[i] << " ";
    }
    cout << endl;

    return 0;
}
