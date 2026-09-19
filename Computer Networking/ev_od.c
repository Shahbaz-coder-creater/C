#include <stdio.h>

int main()
{
    int data[100], n, i, count = 0;
    int parityBit;

    printf("Enter the number of data bits: ");
    scanf("%d", &n);

    printf("Enter the data bits (0 or 1):\n");

    for (i = 0; i < n; i++)
    {
        scanf("%d", &data[i]);

        if (data[i] == 1)
            count++;
    }

    // Generate even parity bit
    if (count % 2 == 0)
        parityBit = 0;
    else
        parityBit = 1;

    printf("\nOriginal Data: ");

    for (i = 0; i < n; i++)
        printf("%d", data[i]);

    printf("\nEven Parity Bit: %d", parityBit);

    printf("\nTransmitted Data: ");

    for (i = 0; i < n; i++)
        printf("%d", data[i]);

    printf("%d", parityBit);

    // Check parity
    count += parityBit;

    printf("\n\nChecking the transmitted data...");

    if (count % 2 == 0)
        printf("\nNo Error Detected.");

    else
        printf("\nError Detected.");

    return 0;
}