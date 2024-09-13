#include<stdio.h>
int find_max(int arr[],int len)
{
	int max=arr[0];
	for(int i=1;i<len;i++)
	{
		max=arr[i];
	}
	return max;
}

int main()
{
	
	int arr[]={3,5,1,4,7,2};
	printf("Maximum number : %d\n",find_max(arr,5));

	return 0;
}
