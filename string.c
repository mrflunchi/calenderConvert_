#include <stdio.h>

int main() {

	char name[] = "parham";
	char othername[] = {'a','u','r','o','r','a','\0'};
	int i = 0;
	printf("%s\n", name);
	printf("%s\n", othername);
	printf("%c\n", othername[3]);
	printf("%c\n", name[3]);
	
	int length = sizeof(name) / sizeof(name[3]);
	
	for (i; i < length; i++) {
	
		printf("%c", name[i]);
	
	}
	printf("\n");
	
	return 0;
} 
