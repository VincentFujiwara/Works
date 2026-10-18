// Задачник Абрамяна - задача begin6
//
//Даны длины ребер a, b, c прямоугольного параллелепипеда. Найти
//его объем V = a·b·c и площадь поверхности S = 2·(a·b + b·c + a·c).
//
// Решение Урсу Артёма

#include <stdio.h>
int main () {
	int a,b,c,v,s;
	scanf("%d %d %d",&a,&b,&c);
	v = a*b*c;
	s = 2*(a*b + b*c + a*c);
	printf("%d\n%d",v,s);
return 0;
}
