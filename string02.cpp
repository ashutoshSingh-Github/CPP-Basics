#include <iostream>
#include <string>

using namespace std;

// Custom comparison function to sort words based on their first alphabet
bool compareWords(const string& a, const string& b) {
    return a < b;
}

int main() {
    // Array of words
    string words[] = {"apple", "banana", "orange", "grape", "cherry"};

    // Number of words in the array
    int size = sizeof(words) / sizeof(words[0]);

    // Sorting the array in ascending order based on the first alphabet of each word
    for (int i = 0; i < size - 1; ++i) {
        for (int j = 0; j < size - i - 1; ++j) {
            if (compareWords(words[j + 1], words[j])) {
                // Swap words if they are in the wrong order
                string temp = words[j];
                words[j] = words[j + 1];
                words[j + 1] = temp;
            }
        }
    }

    // Output the sorted words
    cout << "Sorted words in ascending order:" << endl;
    for (int i = 0; i < size; ++i) {
        cout << words[i] << endl;
    }

    return 0;
}