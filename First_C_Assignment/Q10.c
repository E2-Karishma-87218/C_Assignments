#include<stdio.h>
#include<math.h>

int main()
{
	int a,b,c,s;
	float perimeter,area;

	printf("Enter the values of a,b and c: \n");
	scanf("%d%d%d",&a,&b,&c);

	perimeter=(a+b+c*a+b+c);

	printf("The perimeter of the triangle is: %.2f\n",perimeter);

	//To find the area of a triangle using Heron's formula, we need semi-perimeter of a triangle
	s=perimeter/2;

	area=sqrt(s*(s-a)*(s-b)*(s-c));
	printf("The area of the triangle is: %.2f\n",area);
	return 0;
}
