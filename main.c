#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int answer =32;
	int num;
	int trial= 0;
	do
	{
		//1.input
		printf("input a number: ");
		scanf("%d", &num);
		
		//2. decision( low/high) (wrong answer)
		if (answer>num)
			printf("high\n");
		else if (answer<num)
			printf("low\n");
		trial= trial+1;
			
	}
	while(answer!=num); //3. loop condition : answer is equal to num??
	
	printf("congratulation! trial:%d\n", trial);
	
	system("PAUSE");
	return 0;
}
