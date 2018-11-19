#include <stdio.h>
int main(int argc, char* argv[]) {
	FILE* fp;
	int ch;
	if (argc != 2) {
		printf("Error in format. Usage: show file\n");
		return 1;
	}
	if ((fp = fopen(argv[1], "r")) == NULL) {
		printf("The file <%s> can not be opened.\n", argv[1]);
		return 2;
	}
	ch = fgetc(fp);
	while (ch != EOF) {
		putchar(ch);
		ch = fgetc(fp);
	}
	fclose(fp);
	return 0;
}
