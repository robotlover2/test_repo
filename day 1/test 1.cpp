#include <stdio.h>
//���� 1�� 
/*int main(void) {
	float num1, num2, num3, num4, num5;
	printf("1��° �Ǽ��� �Է��Ͻÿ� :  ");
	scanf_s("%f", &num1);

	printf("2��° �Ǽ��� �Է��Ͻÿ� :  ");
	scanf_s("%f", &num2);

	printf("3��° �Ǽ��� �Է��Ͻÿ� :  ");
	scanf_s("%f", &num3);

	printf("4��° �Ǽ��� �Է��Ͻÿ� :  ");
	scanf_s("%f", &num4);

	printf("5��° �Ǽ��� �Է��Ͻÿ� :  ");
	scanf_s("%f", &num5);
	printf("---- ��� ----\n");
	// �Ǽ� 5�� �ޱ� ���α׷� 
	float ave;//����� ���ϴ� ���α׷� 
	float sum;
	sum = num1 + num2 + num3 + num4 + num5;
	ave = sum / 5;
	printf("����� %.6f �Դϴ� \n", ave);

	float max = num1;// �ִ밪�� ���ϴ� ���α׷� 
	if (num2 > max)
		max = num2;
	if (num3 > max)
		max = num3;
	if (num4 > max)
		max = num4;
	if (num5 > max)
		max = num5;

	printf("�ִ밪�� %.6f �Դϴ� \n", max);


	float min= num1;// �ּҰ��� ���ϴ� ���α׷� 
	if (min>num2)
		min = num2;

	if (min > num3)
		min = num3;

	if (min > num4)
		min = num4;

	if (min > num5)
		min = num5;
	
	
	printf("�ּҰ��� %.6f �Դϴ� \n", min);
}*/

// ���� 2�� 
/*int main(void) {
	int a;
	int f1 = 0, f2 = 1, f3;
printf("�Ǻ���ġ ������ n��°�� �Է��Ͻÿ� : ");
scanf_s("%d", &a);
for (int i = 0; i < a; i++) {
	if (i == 0) {
		printf("%d ", f1);
	}
	else if (i == 1) {
		printf("%d ", f2);
		
	}
	else {// 3��° ���ķ��� �Ǻ���ġ ���� 
		f3 = f1 + f2;
		printf("%d ", f3);
		f1 = f2;
		f2 = f3;
	}
}
	
}*/

// ���� 3�� 
int main(void) {
	int year;
	printf("�⵵�� �Է��ϼ��� : ");
	scanf("%d", year);
}


//���� 4�� 
/*int main(void) {
	float num1, num2;
	char ch;
	printf("input:");
	scanf("%f %c %f", &num1, &ch, &num2);// �Ǽ� 2���� ������ 1���� ���� �޴´� 
	float  mul = 1;
	if (ch == '^') {
		for (int i = 0; i < num2; i++) {
			mul = mul * num1;
		}printf("%.2f^%.2f=%.2f\n", num1, num2, mul);// �ŵ������� ��� �ϱ� ���� for ���� �̿��Ѵ� 

	}
	
	else {
		switch (ch) {
		case '+':
			printf("%.2f+%.2f=%.2f\n", num1, num2, num1 + num2);
			break;

		case '-':
			printf("%.2f-%.2f=%.2f\n", num1, num2, num1 - num2);
			break;

		case '*':
			printf("%.2f*%.2f=%.2f\n", num1, num2, num1 * num2);
			break;

		case '/':
			if (num2 != 0) {
				printf("%.2f/%.2f=%.2f\n", num1, num2, num1 / num2);
			}
			else
				printf("0�� �ƴ� ���ڷ� �Է��� �ּ��� \n");
		}// �ŵ������� �ƴ� ������ �����ڴ� ��Ģ�������� �޴´� 

	}// switch���� ����Ͽ� ��쿡 ���� ������� �ٸ��� �������� ����� ���̴� 
}*/