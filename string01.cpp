#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main() {
    // Array of words
    string words[] = {"apple", "banana", "orange", "grape", "cherry"};

    // Number of words in the array
    int size = sizeof(words) / sizeof(words[0]);

    // Sorting the array in ascending order based on the first alphabet of each word
    sort(words, words + size);

    // Output the sorted words
    cout << "Sorted words in ascending order:" << endl;
    for (int i = 0; i < size; ++i) {
        cout << words[i] << endl;
    }

    return 0;
}