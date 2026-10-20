// Задачник Абрамяна - задача Boolean4
//
//Даны два целых числа: A, B. Проверить истинность высказывания:
//«Справедливы неравенства A > 2 и B ≤ 3».
// 
// Решение Урсу Артёма

#include <stdio.h>
int main (){
	
	int a,b;
	scanf("%d %d",&a,&b); 
	
	if (a>2 && b<3) {
		printf ("okak!");
	}
	
	else {
		printf ("kaput!");
	}
	
return 0;
}


