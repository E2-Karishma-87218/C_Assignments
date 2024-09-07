#include<stdio.h>
void accept_arr(int arr[],int n);
void reverse(int arr[],int n);
void print_arr(int arr[],int n);

int main()
{
	int arr[5];
	accept_arr(arr,5);
	printf("The array before reverse: \n");

	print_arr(arr,5);
	reverse(arr,5);

	printf("The array after reverse: \n");
	print_arr(arr,5);
	return 0;
}

void accept_arr(int arr[],int n)
{  
	for(int i=0;i<n;i++)
	{
		printf("Enter the elements: \n");
		scanf("%d",&arr[i]);
	}
}

void reverse(int arr[],int n)
{
	for(int i=0;i<n-1;i++)
	{
		for(int j=0;j<n-1-i;j++)
		{
			if(arr[j]>arr[j+1])
			{
				int temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;

			}
		}
	}
}

void print_arr(int arr[],int n)
{  
	for(int i=0;i<n;i++)
	{
		printf("The elements of the array : %d \n",arr[i]);
	}
}

