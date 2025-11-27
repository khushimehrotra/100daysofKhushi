#include <stdio.h>

int main() {
    // Example input - you would replace these with actual user input
    int nums[] = {2, 7, 11, 15};
    int target = 9;
    int n = sizeof(nums) / sizeof(nums[0]);
    int index1 = -1, index2 = -1;

    // Brute-force approach to find the two indices
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (nums[i] + nums[j] == target) {
                index1 = i;
                index2 = j;
                // Found the solution, no need to continue
                goto print_indices;
            }
        }
    }

print_indices:
    // Print the result
    printf("%d %d\n", index1, index2);

    return 0;
}
