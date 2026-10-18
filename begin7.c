// Задачник Абрамяна - задача begin7
//
// Найти длину окружности L и площадь круга S заданного радиуса R:
// L = 2·π·R, S = π·R^2
//
// Решение Урсу Артёма

#include <stdio.h>
int main () {
	int l,R,s;
	double Pi;
	scanf ("%d",&R);
	Pi = 3.14;
	l = 2*Pi*R;
	s = Pi*(R*R);
	printf ("%d\n%d",l,s);
	return 0;
}
