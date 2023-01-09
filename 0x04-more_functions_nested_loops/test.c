#include <stdio.h>

/**
*main using sizeof
*
*Return: always 0
*/
int main(void)
{
int n;
printf("size of 'char' on my computer:%lu bytes\n", sizeof(char));
printf("size of 'int' on my computer :%lu bytes\n", sizeof(int));
printf("size of 'float' on my computer :%lu bytes\n",sizeof(float));

return (0);
}

