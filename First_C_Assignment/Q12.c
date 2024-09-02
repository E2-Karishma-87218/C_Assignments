#include<stdio.h>
#include<float.h>
//#include<limits.h>

int main()
{
	
	printf("The range of float is: [%f,%f]\n",FLT_MIN,FLT_MAX);
	printf("The range of float is: [%e,%e]\n",FLT_MIN,FLT_MAX);
	printf("The range of float is: [%E,%E]\n",FLT_MIN,FLT_MAX);
	printf("The range of float is: [%g,%g]\n",FLT_MIN,FLT_MAX);

	printf("The range of double is: [%lf,%lf]\n",DBL_MIN,DBL_MAX);
	printf("The range of long double is:[%Lf,%Lf]\n",DBL_MIN,DBL_MAX);
	return 0;
}
