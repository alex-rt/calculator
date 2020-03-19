#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

float addition(float a, float b) 
{ 
return a+b; 
}
float subtraction(float a, float b)
{ 
return a-b; 
}
float multiplication(float a, float b)
{ 
return a*b; 
}
float division(float a, float b)
{ 
return a/b; 
}
float module(float a, float b)
{ 
return (int)a % (int)b; 
}

int main(int argc, char** argv){
	int arguments =argc-1;
	if(arguments != 3){

		printf("\nInsert 3 valid arguments on the calculator\n");
		printf("Arguments should be in the form: {operation} {number a} {number b}\n");
		
	} else {
		char operator = (char)*argv[1];
		float a = atof(argv[2]);
		float b = atof(argv[3]);

		switch(operator){
			case '+':
				printf("%f plus %f equals %f\n", (float)a, (float)b, addition(a, b));
			break;
			case '-':
				printf("%f minus %f equals %f\n", (float)a, (float)b, subtraction(a, b));
			break;
			case 'x':
				printf("%f times %f equals %f\n", (float)a, (float)b, multiplication(a, b));
			break;
			case '/':
				printf("%f divided by %f equals %f\n", (float)a, (float)b, division(a, b));
			break;
			case '%':
				printf("%f module %f equals %f\n", (float)a, (float)b, module(a, b));
			break;
			default:
				printf("Unknown operator %c\n", operator);
			break;
		}

	}
	return 0;
}
