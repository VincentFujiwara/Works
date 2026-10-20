// Задачник Абрамяна - задача Boolean1
//
//Дано целое число A. Проверить истинность высказывания: «Чис-
//ло A является положительным».
// 
// Решение Урсу Артёма

#include <stdio.h>
int main (){
	int c;
	scanf("%d",&c);
		if (c>0) {
			printf ("okak!");
		}
	else if (c<0) {
		printf ("nein,nein,nein meine kleine !");	
	}
return 0;
}
