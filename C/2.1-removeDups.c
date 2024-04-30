#include<stio.h>

void main(int argc, char **argv) {
	int option = -1;

	while(option != 0 && option != 1) {
		printf("\nSelect option\n0 - WITHOUT auxiliary data structures\n1 - WITH auxiliary data structures\n\nOption:");
		scanf("%d", &option);
		fflush(stdin);
	}
}
