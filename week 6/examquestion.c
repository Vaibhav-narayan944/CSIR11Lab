#include <stdio.h>

int main() {
    int n;
    
    // Read n (the size of the list and the max value in the list)
    printf("Enter the value of n: ");
    scanf("%d", &n);

    // Initialize a frequency array to count the occurrences of integers from 1 to n
    int freq[n + 1]; // Index 0 is unused, count numbers from 1 to n
    for (int i = 1; i <= n; i++) {
        freq[i] = 0; // Initialize all frequencies to 0
    }

    // Read the input list of integers
    printf("Enter the list of integers (size = %d): ", n);
    for (int i = 0; i < n; i++) {
        int num;
        scanf("%d", &num);
        
        // Increment the count for the number if it's within the range [1, n]
        if (num >= 1 && num <= n) {
            freq[num]++;
        }
    }

    // Output the counts for numbers 1 to n
    for (int i = 1; i <= n; i++) {
        printf("%d ", freq[i]);
    }
    printf("\n");

    return 0;
}

