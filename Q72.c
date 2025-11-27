#include <stdio.h>

int main() {
    // Define matrix dimensions
    int rows = 3;
    int cols = 3;
    
    // Declare and initialize the matrix
    int matrix[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    
    // Initialize sum variable
    int sum = 0;
    
    // Iterate through each element of the matrix
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            // Add the current element to the sum
            sum += matrix[i][j];
        }
    }
    
    // Print the final sum
    printf("The sum of all elements in the matrix is: %d\n", sum);
    
    return 0;
}
