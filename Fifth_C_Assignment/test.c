#include<stdio.h>
int find_max(int arr[],int len)
{
	int max=arr[0];
	for(int i=1;i<len;i++)
	{
		if(arr[i]>max)
		{
			max=arr[i];
		}
	}
	return max;
}

int main()
{
		int arr[]={1,2,5,3,7,6,9};

	for(int i=0;i<7;i++)
	{
		printf("%-4d",arr[i]);
	}
	printf("Max: %d\n",find_max(arr,7));

		
		return 0;
}
