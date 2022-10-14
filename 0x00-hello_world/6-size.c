#include <stdio.h>
/**
 * main - Entry point
 *
 * Return : Always 0 (success)
 */
int main(void)
{
	char acharacter;
	int ainteger;
	long along;
	long long alonglong;
	float afloat;

	printf("Size of a char : %lu bytes(s)\n",sizeof(acharacter));
	printf("Size of a char : %lu bytes(s)\n",sizeof(ainteger));
	printf("Size of a char : %lu bytes(s)\n",sizeof(along));
        printf("Size of a char : %lu bytes(s)\n",sizeof(alonglong));
        printf("Size of a char : %lu bytes(s)\n",sizeof(afloat));

	return (0);
}
