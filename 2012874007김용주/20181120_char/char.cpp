#include <stdio.h>
#include <string.h>

void printArray(char* arr, int length)
{
	for (int index=0; index<length; index++)
		printf("array[%d] = %c\n", index, arr[index]);
}

int main()
{
	char c;
	c = 'A';
	printf("c = %d\n", c);
	printf("c = %c\n", c);	// ASCII
	

	char a[] = {'h', 'e', 'l', 'l', 'o'};
	printArray(a, 5);

	// ¹®ÀÚ¿­ string
	char b[]="hello";	// char[b] = {'h', 'e', 'l', 'l', 'o', '\0'};
	printf("%s\n", b);

	// strlen
	printf("The length of the string is %d\n", strlen(b));

	// strcat
	char str1[50] = "hello";
	char* str2 = " world";
	strcat(str1, str2);
	printf("strcat : %s\n", str1);

	// strcpy
	strcpy(str1, str2);
	printf("strcpy : %s\n", str2);

	return 0;
}