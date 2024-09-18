#include <iostream>
using namespace std;

int main() {
    int a, b;
    // Input two integers
    cin >> a >> b;
    
    // Array to store the English words for numbers from 1 to 9
    string numbers[] = {"", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

    // Loop from a to b (inclusive)
    for (int i = a; i <= b; i++) {
        if (i >= 1 && i <= 9) {
            // Print the English representation of numbers between 1 and 9
            cout << numbers[i] << endl;
        } else {
            // If greater than 9, check for even or odd
            if (i % 2 == 0) {
                cout << "even" << endl;
            } else {
                cout << "odd" << endl;
            }
        }
    }

    return 0;
}
