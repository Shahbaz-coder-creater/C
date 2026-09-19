#include <stdio.h>

int main()
{
    int data[20], n, i;
    int count = 0, parityBit;

    printf("Enter number of bits: ");
    scanf("%d", &n);


    printf("Enter binary data: ");

    for(i = 0; i < n; i++)
    {
        scanf("%d", &data[i]);

        if(data[i] == 1)
            count++;
    }

    // Calculate even parity bit
    if(count % 2 == 0)
        parityBit = 0;
    else
        parityBit = 1;

    printf("\nOriginal Data: ");

    for(i = 0; i < n; i++)
        printf("%d", data[i]);

    printf("\nParity Bit: %d", parityBit);

    printf("\nTransmitted Data: ");

    for(i = 0; i < n; i++)
        printf("%d", data[i]);

    printf("%d\n", parityBit);

    return 0;
}