#include <stdio.h>
#include <stdlib.h>

main()
{
	int fNum, step;

	printf("Enter a number for range 1-100000000: ");
	scanf("%d", &fNum);
	while(fNum<1 || fNum>100000000){
		printf("[**[Number outside given renage!]**]\n");
		printf("Enter a number for range 1-100000000: ");
		scanf("%d", &fNum);
	}

	step = 0;

	while(fNum!=1){

		printf("Step %d:\t%d\n", step, fNum);

		if(fNum%2==0){
			fNum = fNum/2;
			step++;
		}
		else if(fNum%2!=0){
			fNum = (fNum*(3)+1);
			step++;
		}
		else{
			printf("ERROR");
		}
	}
	printf("Step %d:\t%d\n", step, fNum);
	printf("Number of steps to loop: %d\n", step );
}