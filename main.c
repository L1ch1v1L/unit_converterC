#include <stdio.h>

void DTR();
void Length();
void duration();

void main() 
{
	int choose;
	while (1)
	{
		printf("Unit converter\n");
		printf("1. Length; 2. Data Transfer Rate; 3. Duration\n");
		printf("> ");
		scanf("%d",&choose);
		if (choose == 1)
		{
			Length();
		}
		else if (choose == 2)
		{
			DTR();
		}
		else if (choose == 3)
		{
			duration();
		}
	}
}
void Length()
{

	int choose;
	float kilometer;
	printf("For main variable will be kilometer.\n");
	printf("How many kilometers will be:\n");
	printf("> ");
	scanf("%f",&kilometer);
	printf("1. Mile; 2. Inch; 3.Light year; 4. Centimeter\n");
	printf("> ");
	scanf("%d",&choose);
	if (choose == 1)
	{

		printf("Mile: %f\n",kilometer * 1.609344);
	}
	else if (choose == 2)
	{
		printf("Inch: %f\n",kilometer * 39370.08);
	}
	else if (choose == 3)
	{
		printf("Light year: %.19f\n", kilometer * 0.0000000000001057001);
	}
	else if (choose == 4)
	{
		printf("Centimeter: %f\n",kilometer * 100000);
	}
}
void DTR()
{
	int choose;
	float mps;
	printf("The main variable will be Megabyte per second\n");
	printf("How many:\n");
	printf("> ");
	scanf("%f",&mps);
	printf("1. Gigabyte per second; 2.Terabyte per second; 3.Kilobyte per second\n");
	printf("> ");
	scanf("%d",&choose);
	if (choose == 1)
	{
		printf("Gigabyte per second: %f\n",mps * 0.001);
	}
	else if (choose == 2)
	{
		printf("Terabyte per second: %f\n",mps * 0.000001);
	}
	else if (choose == 3)
	{
		printf("Kilobyte per second: %f\n",mps * 1000);
	}
}
void duration()
{
	int choose;
	float min;
	printf("The main variable will be minute\n");
	printf("How many:\n");
	printf("> ");
	scanf("%f",&min);
	printf("1. Hours; 2. Seconds; 3. Weeks; 4. NanoSeconds;\n");
	printf("> ");
	scanf("%d",&choose);
	if (choose == 1)
	{
		printf("Hours: %.8f\n",min * 0.01666667);
	}
	else if (choose == 2)
	{
		printf("Seconds: %f\n",min * 60);
	}
	else if (choose == 3)
	{
		printf("Weeks: %.11f\n",min*0.00009920635);
	}
	else if (choose == 4)
	{
		printf("NanoSeconds: %f\n",min*60000000000);
	}
}