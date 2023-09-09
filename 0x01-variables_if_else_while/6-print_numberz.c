#include <stdio.h>
/**
 * main - Entry point and prints numbers using putchar
 *
 * Return: Always 0 (Affirmative)
 */
int main(void)
{
int nums;

for (nums = '0'; nums <= '9'; nums++)
{
putchar(nums);
}
putchar('\n');
return (0);
}
