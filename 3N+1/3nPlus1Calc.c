#include <stdio.h>
#include <stdlib.h>

main()
{
	int fNum, step;

	printf("Enter int: ");
	scanf("%d", &fNum);
	step = 0;

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
			printf("TEST ERROR");
		}
	}
	printf("%d\n", fNum);
	printf("Number of steps to loop: %d\n", step );
}