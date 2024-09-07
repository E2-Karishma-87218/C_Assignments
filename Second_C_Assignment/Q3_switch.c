#include<stdio.h>
int main()

{
	int emp_id,dept_no;
	char dsgn_code;

	printf("Enter the employee id: \n");
	scanf("%d",&emp_id);

	printf("Enter the department no: \n");
	scanf("%d",&dept_no);

	printf("Enter the designation code: \n");
	scanf("%*c%c",&dsgn_code);

	switch(dept_no)
	{
		case 10 : printf("Employee with employee id %d is working in Marketing deparment ",emp_id);
				break;
		
		case 20 : printf("Employee with employee id %d is working in Management department ",emp_id);
				break;
			
		case 30 : printf("Employee with employee id %d is working in Sales ",emp_id);
				break;

		case 40 : printf("Employee with employee id %d is working in Designing ",emp_id);
				break;

		default : printf("Invalid input!\n");		
			
	}
	
	switch(dsgn_code)
	{
		case 'M' : printf("as a Manager\n");
				break;
		case 'S' : printf("as a Supervisor\n");
				break;
		case 's' : printf("as a Security officer\n");
				break;
		case 'C' : printf("as a Clerk\n");
				break;
	}

	return 0;
}
