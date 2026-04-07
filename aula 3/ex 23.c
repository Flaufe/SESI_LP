#include<stdio.h>
void main()
{
	int i = 1;
    while (i <= 100) {
        if (i % 3 == 0 && i % 5 == 0) {
            printf("%d\n", i);
        }
        i++;
    }
}