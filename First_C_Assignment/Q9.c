#include<stdio.h>
int main()
{
	float celsius,fahrenheit;

	printf("Enter the temperature in fahrenheit: \n");
	scanf("%f",&fahrenheit);
	
	//Converting fahrenheit to celsius
	celsius=((1.8)*(fahrenheit-32));

	printf("The temperature in Celsius is:%.2f \n",celsius);


	//Converting celsius to fahrenheit
	printf("Enter the temperature in celsius: \n");
	scanf("%f",&celsius);

	fahrenheit=((1.8)*(celsius+32));

	printf("The temperature in Fahrenheit is: %.2f \n",fahrenheit);

	return 0;
}
