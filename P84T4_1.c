#include<stdio.h>
#include<math.h>

int main()
{
	double a, b, c, x1, x2, p, q, calculate;
	
	printf("������a,b,c��ֵ��\n");
	scanf_s("%lf %lf %lf", &a, &b, &c);

	calculate = pow(pow(b, 2) - (4 * a * c),0.5);
	p = -(b / (2.0 * a));
	q = calculate / (2 * a);

	if (calculate >= 0)
	{
		x1 = p + q;
		x2 = p - q;
		printf("���̵�������ֱ�Ϊ\nx1=%.2f\nx2=%.2f", x1, x2);
	}
	else
	{
		printf("�˷����޽�");
	}
	return 0;
}