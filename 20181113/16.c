#include <stdio.h>
int main(int argc, char* argv[]) {
	int ch;
	FILE* srcfp, *destfp;
	if (argc != 3) {
		printf("Error in format. Usage: copy source destination\n");
		return 1;
	}
	if ((srcfp = fopen(argv[1], "r")) == NULL) {
		printf("The file <%s> can not be opened.\n", argv[1]);
		return 2;
	}
	if ((destfp = fopen(argv[2], "w")) == NULL) {
		printf("The file <%s> can not be opened.\n", argv[2]);
		return 2;
	}
	ch = fgetc(srcfp);
	while (ch != EOF) {
		fputc(ch, destfp);
		ch = fgetc(srcfp);
	}
	fclose(srcfp);
	fclose(destfp);
	return 0;
}
