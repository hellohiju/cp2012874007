// hw1-5.cpp
/* 메뉴를 출력하고, 사용자로부터 입력을 받아 선택된 메뉴를 출력하는 프로그램을 작성하시오.
choose one of the following.
apple
orange
banana
peach

enter your choice here : (사용자 입력)orange

--------------
Your choice is “orange”. */

#include <stdio.h>
#include <string.h>

int main()
{
	char menu[10];

	printf("Choose one of the following.\n");
	printf("apple\n");
	printf("orange\n");
	printf("banana\n");
	printf("peach\n\n");

	printf("Enter your choice here: ");
	scanf("%s", menu);

	if (strcmp(menu, "apple") * 
		strcmp(menu, "banana") * 
		strcmp(menu, "orange") * 
		strcmp(menu, "peach") == 0)
		printf("Your choice is \"%s\".\n\n", menu); 
	else
		printf("Choose the menu again\n\n");

	return 0;
}
