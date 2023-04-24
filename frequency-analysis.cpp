#include <iostream>
#include <string>
#include <map>
#include <cctype>

using namespace std;

void display_frequencies(map<char, float> freq) {
    // Display the frequency of each character
    cout << "Frequency analysis:" << endl;
    for (auto it = freq.begin(); it != freq.end(); ++it) {
        cout << it->first << ": " << it->second << endl;
    }
}

int main() {
    string text;
    getline(cin, text);

    map<char, int> frequency;
    int total_chars = 0;

    // Count the frequency of each letter in the input text
    for (char c : text) {
        if (isalpha(c)) {
            c = toupper(c); // Normalize to uppercase
            frequency[c]++; // Increment frequency of this letter
            total_chars++;
        }
    }

    map<char, float> normalized_frequency;

    // Normalize frequencies by dividing by total number of characters
    for (auto it = frequency.begin(); it != frequency.end(); ++it) {
        char c = it->first;
        int count = it->second;
        float freq = (float) count / total_chars;
        normalized_frequency[c] = freq;
    }

    displayfrequencies(normalizedfrequency);

    return 0;
}
