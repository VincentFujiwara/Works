// Задачник Абрамяна - задача Boolean6
//
//Даны три целых числа: A, B, C. Проверить истинность высказы-
//вания: «Справедливо двойное неравенство A < B < C».
// 
// Решение Урсу Артёма

#include <stdio.h>
int main (){
	
	int a,b,c;
	scanf("%d %d %d",&a,&b,&c); 
	
	if (a>b && a>c) {
		printf ("%d is biggest",a);
	}
	
	else {
		printf ("kaput!");
	}
	
return 0;
}


