#include <stdio.h>
int main (){
	int ch; int count = 0;
	ch = fgetc (stdin);
	while (ch != '\n') {
		count = count +1;
		ch = fgetc(stdin);
	}
	printf ("%d",count);
	return 0;
}
