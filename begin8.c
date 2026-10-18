// Задачник Абрамяна - задача begin8
//
// Даны два числа a и b. Найти их среднее арифметическое: (a + b)/2.
//
// Решение Урсу Артёма

#include <stdio.h>
int main () {
	int a,b,res;
	scanf ("%d%d",&a,&b);
	res = (a+b)/2;
	printf ("%d",res);
	return 0;
}
