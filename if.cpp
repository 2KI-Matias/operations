#include <iostream>
//~ #include <stdio.h> 
using namespace std;
	int main() { 
		float x;
		float y;
		char znak;
		float w;
		printf("КАЛЬКУЛЯТОР");
		printf("\n");
		printf("введіть перше число");
		printf("\n");
		scanf ("%f", &x);
		printf("\n");
		printf("\n");
		printf( "виберіть математичну дію");
		printf("\n");
		printf("*  /   +   - ");
		printf("\n"); 
		scanf ("%s", &znak);
		printf("введіть друге число");
		printf("\n");
		scanf ("%f", &y);
		printf("Відповідь");
		printf("\n");
		if (znak == '*') {
			w = ("%f",x*y);
			printf("%f", x);
			printf("%s", "*");
			printf("%f", y);
			printf("%s", "="); 
			printf("%f", w);
		}
		if (znak == '/') {
			w = ("%f",x/y);
			printf("%f", x);
			printf("%s", "/");
			printf("%f", y);
			printf("%s", "="); 
			printf("%f", w);
		}
		if (znak == '+') {
			w = ("%f",x+y);
			printf("%f", x);
			printf("%s", "+");
			printf("%f", y);
			printf("%s", "="); 
			printf("%f", w);
		}
		if (znak == '-') {
			w = ("%f",x-y);
			printf("%f", x);
			printf("%s", "-");
			printf("%f", y);
			printf("%s", "="); 
			printf("%f", w);
		}
	return 0;
	
	}
