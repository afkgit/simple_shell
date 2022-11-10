#include <stdio.h>
/**
 * main - checks if the user is old enough to access the site
 *
 * Return: 0 for success
 */
int main(void)
{
	int age;

	printf("Enter your age: \n");
	scanf("%d", &age);

	if (age < 18)
	{
		printf("Sorry. You are not old enough to access this website.\n");
	}
	else
	{
		printf("Welcome! Sign up for a free account.\n");
	}

	return (0);
}
