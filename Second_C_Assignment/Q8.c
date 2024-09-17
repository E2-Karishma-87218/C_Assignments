#include<stdio.h>                                                                                                                                   

int main()
{
	int quantity;
	float discount;
	float final_price;

	printf("Enter the quantity: \n");
	scanf("%d",&quantity);

	final_price= quantity * 5;//unit price given

	if(quantity>30 && quantity<50)
	{
		discount=final_price-(final_price*10/100);
		printf("Discount : %f\n",discount);
	}
	else if(quantity>50)
	{
		discount=final_price-(final_price*15/100);
		printf("Discount : %f\n",discount);
	}
	else
	{
		printf("Price : %f\n",final_price);
	}

	return 0;
}

