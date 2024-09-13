#include<stdio.h>
int find_max(int arr[],int len);
int find_min(int arr[],int len);

int main()
{
	int arr[]={5,3,7,8,2,1,9};
	printf("Maximum number : %d \n",find_max(arr,7));
	printf("Minimum number : %d\n",find_min(arr,7));

			return 0;
			}
	int find_max(int arr[],int len)
			{

		int max=arr[0];
		for(int i=1;i<len;i++)
		{
		max=arr[i];
		}
		return max;
		}

		
		int find_min(int arr[],int len)
		{
		int min=arr[0];
		for(int i=1;i<len;i++)
		{
			if(arr[i]<min)
				min=arr[i];
		}
		return min;
		}

