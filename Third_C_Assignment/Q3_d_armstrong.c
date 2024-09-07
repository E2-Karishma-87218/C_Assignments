#include<stdio.h>
#include<math.h>

int main()
{
	int count=1,temp,num,rem,arm=0;

	printf("Enter the number: \n");
	scanf("%d",&num);

	temp=num;

	while(temp!=0)
	{
		rem=temp%10;
		arm=arm+pow(rem,count);
		count++;
		temp=temp/10;
	}

	if(num==arm)
		printf("%d is an Armstrong\n",num);
	else
		printf("%d is not an Armstrong\n",num);
	return 0;
}
