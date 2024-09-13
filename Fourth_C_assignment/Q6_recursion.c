#include<stdio.h>
void hex_conversion(int);

int main()
{
	int n;
	printf("Enter the number: ");
	scanf("%d",&n);
	
	hex_conversion(n);
	return 0;
}

void hex_conversion(int n)
{
	int hex=0;
	hex=n%16;
	hex_conversion(n/16);

	if(hex>9)
		printf("%c",'A'+(hex-10));
	else
		printf("%d",hex);
}
