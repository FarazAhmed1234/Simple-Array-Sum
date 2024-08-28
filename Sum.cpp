#include <iostream>
using namespace std;

int main() {
    int num, sum = 0;
    
    cout << "Enter the number of elements: ";
    cin >> num;

    // Ensure the number of elements is within a valid range
    if (num >= 0 && num <= 100) {
        int arr[num];  // Declare array after num has a valid value
        
        // Input elements and calculate sum
        for (int i = 0; i < num; i++) {
            cout << "Enter element " << i + 1 << ": ";
            cin >> arr[i];
            sum += arr[i];  // Add the value of arr[i] to sum
        }

        // Output the sum
        cout << "Sum of the elements: " << sum << endl;
    } else {
        cout << "Please enter a number between 0 and 100." << endl;
    }

    return 0;
}
