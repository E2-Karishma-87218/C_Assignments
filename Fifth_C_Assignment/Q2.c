#include<stdio.h>

void accept_arr(int arr[],int);
void print_arr(int arr[],int);

int main()
{
	int no,arr[100];
	printf("Enter the no of elements: \n");
	scanf("%d",&no);

	accept_arr(arr,no);
	print_arr(arr,no);

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
void print_arr(int arr[],int n)
{
	for(int i=0;i<n;i++)
	{
		printf("The elements are: %d\n",arr[i]);
	}
}
