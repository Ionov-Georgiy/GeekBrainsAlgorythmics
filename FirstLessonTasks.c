#include <stdio.h>
#include <math.h>

void ScoreBMI(){
	printf("Input hight in meters: \n");
	double hight;
	scanf("%lf", &hight);

	printf("Input weight in kg: \n");
	double mass;
	scanf("%lf", &mass);

	printf("BMI:\n%lf\n", mass/(hight*hight));
}

void MaxFromFour(){
	int first;
	int second;
	printf("Input first value: \n");
	scanf("%d", &first);

	printf("Input second value: \n");
	scanf("%d", &second);
	first = (first > second) ? first : second;

	printf("Input third value: \n");
	scanf("%d", &second);
	first = (first > second) ? first : second;

	printf("Input fourth value: \n");
	scanf("%d", &second);
	first = (first > second) ? first : second;

	printf("Max value is %d \n", first);

}

void IntValueExchange(int first, int second){

	printf("First value: %d \n", first);
	printf("Second value: %d \n", second);

	printf("=====Exchange===== \n");

	first = first+second;
	second = first-second;
	first = first-second;

	printf("First value: %d \n", first);
	printf("Second value: %d \n", second);

}

void QuadraticEquation(){
	double a;
	printf("Input quadratic equation a \n");
	scanf("%lf", &a);
	double b;
	printf("Input quadratic equation b \n");
	scanf("%lf", &b);
	double c;
	printf("Input quadratic equation c \n");
	scanf("%lf", &c);

	double qDiscriminant = 0;
	qDiscriminant = (b*b) - 4*a*c;

	double result = 0;

	if(qDiscriminant>0){
		result = (-b+sqrt(qDiscriminant))/(2*a);
		printf("x1 = %lf \n", result);
		result = (-b-sqrt(qDiscriminant))/(2*a);
		printf("x2 = %lf \n", result);
	}
	else if(qDiscriminant==0){
		result = (-(b/(2*a)));
		printf("x2 = %lf \n", result);
	}
	else{
		printf("Quadratic equation has no roots \n");
	}
}

void GetSeasonByMonthNumber(){
	int mn;
	printf("Input month number: \n");
	scanf("%d", &mn);
	int seasonNumber = mn/3;
	if(seasonNumber == 1){
		printf("Season is spring\n");
	}
	else if(seasonNumber == 2){
		printf("Season is summer\n");
	}
	else if(seasonNumber == 3){
		printf("Season is fall\n");
	}
	else{
		printf("Season is winter\n");
	}
}

int main(int argc, const char* argv[]){

	setvbuf(stdout, "", _IONBF, 0);

	//1) Индекс массы тела
	ScoreBMI();
	//2) Максимальное из 4
	MaxFromFour();
	//3) Обмен значениями
	IntValueExchange(7, 4);
	//4) Корень квадратного уравнения
	QuadraticEquation();
	//5) Получить время года по номеру месяца
	GetSeasonByMonthNumber();
	return 0;
}
