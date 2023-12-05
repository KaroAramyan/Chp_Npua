#include <iostream>
#include <string>

std::string runLengthEncode(const std::string& input) {
    int n = input.length();
    std::string encoded = "";

    for (int i = 0; i < n; i++) {
        char currentChar = input[i];
        int count = 1;

        // Count consecutive characters
        while (i + 1 < n && input[i] == input[i + 1]) {
            count++;
            i++;
        }

        // Append the character and its count to the encoded string
        encoded += currentChar;
        encoded += std::to_string(count);
    }

    return encoded;
}

int main() {
    std::string input;
    std::cout << "Enter a string to compress using RLE: ";
    std::cin >> input;

    std::string compressed = runLengthEncode(input);

    std::cout << "Compressed string: " << compressed << std::endl;

    return 0;
}
