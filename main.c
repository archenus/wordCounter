#include <stdio.h>

void say_hello() {
  printf("hello\n");
}

int main(int argc, char **argv){
	char* hw = "hello world";
	int i  = 0;
	for(i = 0; i < 10; i++) {
		printf("%s\n", hw);
		printf("dongil");
	}

	return 0;
}
