#include <stdio.h>

unsigned char evenParity(unsigned char byte) 
{
    unsigned char bitCount = 0;

      for (int i = 0; i < 8; i++) 
	{
        if (byte & (1 << i)) 
		{
            bitCount++;
        }
    }

     if (bitCount % 2 != 0) 
	{
        byte |= (1 << 7); 
    }

    return byte;
}

void printByteInBinary(unsigned char byte) 
{
    for (int i = 7; i >= 0; i--) 
	{
        printf("%d", (byte >> i) & 1);
    }
    printf("\n");
}

int main() 
{
    unsigned char byte;

    printf("Enter a byte (0-255): ");
    scanf("%hhu", &byte);

    printf("Original byte in binary: ");
    printByteInBinary(byte);

    unsigned char correctedByte = evenParity(byte);

    printf("Byte with even parity in binary: ");
    printByteInBinary(correctedByte);

    return 0;
}

