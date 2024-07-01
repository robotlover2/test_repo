#include <stdio.h>
//과제 1번 
/*int main(void) {
	float num1, num2, num3, num4, num5;
	printf("1번째 실수를 입력하시오 :  ");
	scanf_s("%f", &num1);

	printf("2번째 실수를 입력하시오 :  ");
	scanf_s("%f", &num2);

	printf("3번째 실수를 입력하시오 :  ");
	scanf_s("%f", &num3);

	printf("4번째 실수를 입력하시오 :  ");
	scanf_s("%f", &num4);

	printf("5번째 실수를 입력하시오 :  ");
	scanf_s("%f", &num5);
	printf("---- 결과 ----\n");
	// 실수 5개 받기 프로그램 
	float ave;//평균을 구하는 프로그램 
	float sum;
	sum = num1 + num2 + num3 + num4 + num5;
	ave = sum / 5;
	printf("평균은 %.6f 입니다 \n", ave);

	float max = num1;// 최대값을 구하는 프로그램 
	if (num2 > max)
		max = num2;
	if (num3 > max)
		max = num3;
	if (num4 > max)
		max = num4;
	if (num5 > max)
		max = num5;

	printf("최대값은 %.6f 입니다 \n", max);


	float min= num1;// 최소값을 구하는 프로그램 
	if (min>num2)
		min = num2;

	if (min > num3)
		min = num3;

	if (min > num4)
		min = num4;

	if (min > num5)
		min = num5;
	
	
	printf("최소값은 %.6f 입니다 \n", min);
}*/

// 과제 2번 
/*int main(void) {
	int a;
	int f1 = 0, f2 = 1, f3;
printf("피보나치 수열의 n번째를 입력하시오 : ");
scanf_s("%d", &a);
for (int i = 0; i < a; i++) {
	if (i == 0) {
		printf("%d ", f1);
	}
	else if (i == 1) {
		printf("%d ", f2);
		
	}
	else {// 3번째 이후로의 피보나치 수열 
		f3 = f1 + f2;
		printf("%d ", f3);
		f1 = f2;
		f2 = f3;
	}
}
	
}*/

// 과제 3번 
int main(void) {
	int year;
	printf("년도를 입력하세요 : ");
	scanf("%d", year);
}


//과제 4번 
/*int main(void) {
	float num1, num2;
	char ch;
	printf("input:");
	scanf("%f %c %f", &num1, &ch, &num2);// 실수 2개에 연산자 1개를 먼저 받는다 
	float  mul = 1;
	if (ch == '^') {
		for (int i = 0; i < num2; i++) {
			mul = mul * num1;
		}printf("%.2f^%.2f=%.2f\n", num1, num2, mul);// 거듭제곱을 계산 하기 위해 for 문을 이용한다 

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
				printf("0이 아닌 숫자로 입력해 주세요 \n");
		}// 거듭제곱이 아닌 나머지 연산자는 사칙연산으로 받는다 

	}// switch문을 사용하여 경우에 따라 결과값이 다르게 나오도록 만들면 끝이다 
}*/