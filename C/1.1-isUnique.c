#include<stdio.h>
#include<string.h>

#define MAXSIZE 1024

int isUnique(char *str) {
	printf("\nWITH auxiliary structure it is. ");
	int charCounts[MAXSIZE] = {0};
	for(int i = 0; i < strlen(str); ++i) {
		if(charCounts[str[i]] != 0)
			return 0;
		charCounts[str[i]]++;
	}
	return 1;
}

int isUniqueWithoutDataStructures(char *str) {
	printf("\nWITHOUTt auxiliary structure it is. ");
	for(int i = 0; i < strlen(str) -1; ++i)
		for(int j = i+1; j < strlen(str); ++j)
			if(str[i] == str[j])
				return 0;
	return 1;
}

int main(int argc, char **argv) {
	int option = -1;
	int ret = -1;
	char str[MAXSIZE];

	printf("Select option\n0 - WITHOUT auxiliary data structures\n1 - WITH auxiliary data structures\n\nOption:");
	scanf("%d", &option);
	fflush(stdin);

	printf("Type in the string to be evaluated: ");
	fgets(str, MAXSIZE, stdin);

	if(option)
		ret = isUnique(str);
	else
		ret = isUniqueWithoutDataStructures(str);
	if(ret)
		printf("This string HAS unique chars\n");
	else 
		printf("This string DOESN'T HAVE unique chars\n");
	return ret;
}
