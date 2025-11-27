#include <stdio.h>
#include <stdlib.h>

void productExceptSelf(int* nums, int numsSize, int* answer) {
    // Initialize prefix_products and suffix_products arrays
    int* prefix_products = (int*)malloc(numsSize * sizeof(int));
    int* suffix_products = (int*)malloc(numsSize * sizeof(int));

    // Calculate prefix products
    prefix_products[0] = 1; // The prefix product for the first element is 1
    for (int i = 1; i < numsSize; i++) {
        prefix_products[i] = prefix_products[i - 1] * nums[i - 1];
    }

    // Calculate suffix products
    suffix_products[numsSize - 1] = 1; // The suffix product for the last element is 1
    for (int i = numsSize - 2; i >= 0; i--) {
        suffix_products[i] = suffix_products[i + 1] * nums[i + 1];
    }

    // Calculate the final answer by combining prefix and suffix products
    for (int i = 0; i < numsSize; i++) {
        answer[i] = prefix_products[i] * suffix_products[i];
    }

    // Free the dynamically allocated memory
    free(prefix_products);
    free(suffix_products);
}

int main() {
    int nums[] = {1, 2, 3, 4};
    int numsSize = sizeof(nums) / sizeof(nums[0]);
    int* answer = (int*)malloc(numsSize * sizeof(int));

    productExceptSelf(nums, numsSize, answer);

    printf("Input Array: [");
    for (int i = 0; i < numsSize; i++) {
        printf("%d%s", nums[i], (i == numsSize - 1) ? "" : ", ");
    }
    printf("]\n");

    printf("Output Array: [");
    for (int i = 0; i < numsSize; i++) {
        printf("%d%s", answer[i], (i == numsSize - 1) ? "" : ", ");
    }
    printf("]\n");

    free(answer);

    return 0;
}
