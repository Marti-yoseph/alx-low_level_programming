#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * main - Entry point
* Return: Always 0 (Success)
 */
int main(void)
{

int i;
int j;
int k;

i = 48;
j = 49;
k = 50;

while  ((i < 56) && (j < 57) && (k < 58))
{
putchar(i);
putchar(j);
putchar(k);
if ((i == 55) && (j == 56) && (k == 57))
{

putchar('\n');

i++;
j++;
k++;
}
else
{

putchar(44);
putchar(32);
if (k < 57)
{

k++;
}
else if ((j < 56) && (k == 57))

{

k = 1 + ++j;
}
else
{

j = 1 + ++i;
k = 1 + j;
}
}
}

return (0);
}
 102-print_comb5.c

#include <stdio.h>

/**

 * main - a simple program that outputs unordered

 * combinations of two digit integers without duplicates

* Return: 0 on success

 */
int main(void)
{

	int ifirst;

	int i;

	int jfirst;

	int j;
for (ifirst = 48; ifirst < 58; ifirst++)
{

for (i = 48; i < 58; i++)
{

j = i + 1;
jfirst = ifirst;
for (; jfirst < 58; jfirst++)
{

for (; j < 58; j++)
{

putchar(ifirst);
putchar(i);
putchar(' ');
putchar(jfirst);
putchar(j);

if (ifirst != 57 || jfirst != 57 || i != 56 || j != 57)
{
putchar(',');
putchar(' ');
}
}

j = 48;
}
}
}
putchar('\n');

return (0);
}
