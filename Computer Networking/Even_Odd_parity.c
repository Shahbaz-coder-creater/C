#include <stdio.h>
#include <string.h>

// Function to count total number of set bits ('1's)
int countOnes(char str[]) {
    int count = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == '1') {
            count++;
        }
    }
    return count;
}

int main() {
    char data[64], transmitted[65], received[65];
    int choice, onesCount;
    char parityBit;

    printf("=== SENDER SIDE ===\n");
    printf("Enter binary data bit stream (e.g., 1011001): ");
    scanf("%s", data);

    printf("Choose Parity Scheme:\n");
    printf("1. Even Parity\n2. Odd Parity\n");
    printf("Enter choice (1 or 2): ");
    scanf("%d", &choice);

    onesCount = countOnes(data);

    // Calculate parity bit
    if (choice == 1) { // Even Parity
        parityBit = (onesCount % 2 == 0) ? '0' : '1';
    } else {           // Odd Parity
        parityBit = (onesCount % 2 == 0) ? '1' : '0';
    }

    // Build transmitted codeword
    strcpy(transmitted, data);
    int len = strlen(transmitted);
    transmitted[len] = parityBit;
    transmitted[len + 1] = '\0';

    printf("\nCalculated Parity Bit: %c\n", parityBit);
    printf("Transmitted Codeword: %s\n", transmitted);

    printf("\n=== RECEIVER SIDE ===\n");
    printf("Enter received codeword (simulate noise or keep same): ");
    scanf("%s", received);

    int recvOnes = countOnes(received);

    // Verify received data
    if (choice == 1) { // Even Parity Check
        if (recvOnes % 2 == 0) {
            printf("\nStatus: Data accepted successfully! (No error detected)\n");
        } else {
            printf("\nStatus: Error detected! Parity mismatch.\n");
        }
    } else {           // Odd Parity Check
        if (recvOnes % 2 != 0) {
            printf("\nStatus: Data accepted successfully! (No error detected)\n");
        } else {
            printf("\nStatus: Error detected! Parity mismatch.\n");
        }
    }1

    return 0;
}