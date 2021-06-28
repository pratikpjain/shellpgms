#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void copyfile(FILE *fptr1 , FILE *fptr2) {
	char chr = fgetc(fptr1);
	while(chr != EOF) {
		fputc(chr , fptr2);
		chr = fgetc(fptr1);
	}
	return;
}

int main(int argc , char **argv) {
	FILE *fptr1 , *fptr2;

	fptr1 = fopen(argv[1] , "r");
	fptr2 = fopen(argv[2] , "w");

	if(fptr1 == NULL) {
		printf("Error: File %s doesn't exists in current directory" , argv[1]);
		return 0;
	}

	copyfile(fptr1 , fptr2);

	fclose(fptr1);
	fclose(fptr2);

	return 0;
}
