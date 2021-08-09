#include <stdio.h>
#include <stdlib.h>

main()
{
	int fNum, dNum, step;

	printf("Enter int: ");
	scanf("%d", &fNum);
	step = 0;

	printf("Starting Number: %d\n", fNum);

	while(fNum!=1){

		printf("%d\n", fNum);

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
	printf("%d\n", fNum);
	printf("Number of steps to loop: %d\n", step );
}