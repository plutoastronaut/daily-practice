#include<stdio.h>

int main()
{
	int c, s;
	float p, w, d, f;
	printf("�����뵥�ۣ����������룺\n");
	scanf_s("%f %f %f", &p, &w, &s);

	if (s >= 3000)	c = 12;
	else			c = s / 250;
	
	switch (c)
	{
	case 0:d = 0; break;
	case 1:d = 2; break;
	case 2:d = 4; break;
	case 3:d = 4; break;
	case 4:d = 8; break;
	case 5:d = 8; break;
	case 6:d = 8; break;
	case 7:d = 8; break;
	case 8:d = 10; break;
	case 9:d = 10; break;
	case 10:d = 10; break;
	case 11:d = 10; break;
	case 12:d = 15; break;

	default:printf("error");
	}
	f = p * w * s * (1 - (d / 100));
	printf("���˷�Ϊ%.4f", f);
	return 0;
}