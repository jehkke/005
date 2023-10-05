#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int input;
	
	printf("input an interger:");
	scanf("%d", &input);
	
	if (input < 0)
		input= -input;
	
	printf("absolute value is %i\n", input); /* (warning!)if you input positive, positive is printing.
	when if input<0 case is right, absolute value is printing!! */
	
	system("PAUSE");
	return 0;
}
