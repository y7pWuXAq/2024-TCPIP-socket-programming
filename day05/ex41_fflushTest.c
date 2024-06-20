#include <stdio.h>

int main()
{
	FILE *file = fopen("test.txt", "w");

	if(file == NULL) {
		printf("파일 열기 실패\n");
		return 1;
	}
	fprintf(file, "Hello World\n");

	if(fflush(file) == 0) {
		printf("버퍼 비우기 성공\n");
	}
	else {
		printf("버퍼 비우기 실패\n");
	}

	fclose(file);
	return 0;
}
