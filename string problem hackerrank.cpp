#include <iostream>
#include <string>

using namespace std;

int main() {
    string str1, str2;
    cin >> str1 >> str2;

    // Calculate the lengths of the strings
    int len1 = str1.length();
    int len2 = str2.length();

    // Concatenate the two strings
    string concatenated = str1 + str2;

    // Swap the first characters of the two strings
    swap(str1[0], str2[0]);

    // Output the results
    cout << len1 << " " << len2 << endl;
    cout << concatenated << endl;
    cout << str1 << " " << str2 << endl;

    return 0;
}

