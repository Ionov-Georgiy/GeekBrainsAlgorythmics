//Ионов Георгий

#include <stdio.h>

//1) Реализовать функцию перевода из десятичной системы в двоичную, используя рекурсию.
long convertToBin(long n)
{
	long result = n % 2; // result = 1
	n /= 2; //n = 4 / 2 = 2
	if (n == 0){
		return result;
	}
	else
	{
		return convertToBin(n) * 10 + result; // result = 0 * 10 + ( 0 * 10 + (1) )
	}
}

//2) Реализовать функцию возведения числа a в степень b:

//a. без рекурсии
long power(int a, int b)
{
	long result = 1;
	while(b)
	{
		result = result * a;
		b--;
	}

	return result;
}

//b. рекурсивно
long powerRec(int a, int b)
{
	if(b){
		b--;
		long result = a * power(a, b);
		return result;
	}else{
		return 1;
	}
}

//c. *рекурсивно, используя свойство четности степени.
long quickPowRec(int a, int b)
{
	if(b){
		if(b%2) {
			b--;
			return quickPowRec(a, b) * a;
		}
		else{
			return quickPowRec(a * a, b / 2);
		}
	}
	return 1;
}

int main(int argc, char *argv[])
{
	int n = 13;
	int a = 6;
	int b = 7;
	printf("%d %ld\n", n, convertToBin(n));
	printf("Число %d в степени %d = %ld\n", a, b, power(a, b));
	printf("Число %d в степени %d = %ld\n", a, b, powerRec(a, b));
	printf("Число %d в степени %d = %ld\n", a, b, quickPowRec(a, b));

	return 0;
}

