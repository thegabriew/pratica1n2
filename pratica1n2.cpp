#include <stdio.h>

#define Q '#'

void parede (int a) {

	int i = 0;
	
	while(i<=a) {
		printf("%c",Q);
		i +=1;
	}
	
	
	printf("\n");
	
}

void casa(int h, int t= 6) {
	
	for(int x = 0;x<t;x++) parede(h);
	printf("\n");
}

int main () {

	casa(3,8);
	casa(12);
	casa(5);
	
	return 0;
}
