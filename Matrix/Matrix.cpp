#include <iostream>
#include <vector>

void transposeMatrix(std::vector<std::vector<int>>& matrix) {
    int n = matrix.size();

    for (int i = 0; i < n; ++i) {
        for (int j = i + 1; j < n; ++j) {
            // Swap elements matrix[i][j] and matrix[j][i]
            std::swap(matrix[i][j], matrix[j][i]);
        }
    }
}

// Function to print a matrix3
void printMatrix(const std::vector<std::vector<int>>& matrix) {
    int n = matrix.size();

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            std::cout << matrix[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

int main() {
    int n;
    std::cout << "Enter the size of the square matrix: ";
    std::cin >> n;

    std::vector<std::vector<int>> matrix(n, std::vector<int>(n));

    std::cout << "Enter the elements of the matrix:" << std::endl;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            std::cin >> matrix[i][j];
        }
    }

    transposeMatrix(matrix);

    std::cout << "Matrix with rows arranged into columns:" << std::endl;
    printMatrix(matrix);

    return 0;
}
