#include<stdio.h>
#include<math.h>

int main()
{
	double ¦°=0;
	for (int i = 1;;i++,i++)
	{
		int num = -1;
		double number = 1.0;
		number = (pow(num, i - 1)) * (1 / i);
		¦° += number;
		if (fabs(number) < 1e-6)
		{
			¦° = ¦° - number;
			¦° *= 4;
			goto show;
		}

	}
show:
	printf("%.6lf", ¦°);
	return 0;
}