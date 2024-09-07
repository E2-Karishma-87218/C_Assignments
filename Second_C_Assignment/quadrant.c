#include<stdio.h>

int main()
{
	int cd1,cd2;
	
	printf("Enter the values of coordinates 1 and 2: \n");
	scanf("%d%d",&cd1,&cd2);

	if(cd1 > 0 && cd2 > 0)
		printf("(%d,%d) coordinate point lies in the 1st quadrant\n",cd1,cd2);
	else if(cd1 < 0 && cd2 > 0)
		printf("(%d,%d) coordinate point lies in the 2nd quadrant\n",cd1,cd2);
	else if(cd1 < 0 && cd2 < 0)
		printf("(%d,%d) coordinate point lies in the 3rd quadrant\n",cd1,cd2);
	else if(cd1 > 0 && cd2 < 0)
		printf("(%d,%d) coordinate point lies in the 4th quadrant\n",cd1,cd2);
	else if(cd1 == 0 && cd2 == 0)
		printf("(%d,%d) coordinate point lies at the origin\n",cd1,cd2);

	return 0;
}
