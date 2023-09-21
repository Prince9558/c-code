#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n; // Read the number of integers in the array
    
    int arr[n]; // Declare an array of size n
    
    // Read the elements of the array
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    // Print the elements of the array in reverse order
    for (int i = n - 1; i >= 0; i--) {
        cout << arr[i] << " ";
    }
    
    cout << endl; // Print a newline character at the end
    return 0;
}

