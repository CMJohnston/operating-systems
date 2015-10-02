#import <stdlib.h>
#import <stdio.h>
#import <math.h>

void printABC(int i){
	int abc;
	switch(i){
		case 0:
			abc = 14*sqrt(25);
			break;
		case 1:
			abc = pow(10,2)+(68/4);
			break;
		case 2:
			abc = sqrt(121)*9;
			break;
		case 3:
			abc = sqrt(10000)+sqrt(49);
			break;
		case 4:
			abc = pow(2,5);
			break;
		case 5:
			abc = pow(2,6)+sqrt(9);
			break;
		case 6:
			abc = pow(11,2)-sqrt(100);
			break;
		case 7:
			abc = pow(10,2);
			break;
		case 8:
			abc = pow(11,2);
			break;
	}
	printf("%c", abc);
}

int main(void){
	for(int i=0; i<9; i++){
		printABC(i);
	}
	printf("\n");
}