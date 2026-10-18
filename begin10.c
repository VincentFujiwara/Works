// Задачник Абрамяна - задача begin10
//
//Даны два ненулевых числа. Найти сумму, разность, произведение и
//частное их квадратов.
//
// Решение Урсу Артёма

#include <stdio.h>
int main () {
	int a,b,sum,raz,pro,chs;
	scanf ("%d %d",&a,&b);
	sum = (a*a)+(b*b);
	raz = (a*a)-(b*b);
	pro = (a*a)*(b*b);
	chs = (a*a)/(b*b);
	printf ("%d\n%d\n%d\n%d",sum,raz,pro,chs);
	return 0;
}
