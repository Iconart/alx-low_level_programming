#include <stdio.h>
#include "main.h"

void reverse_array(int *a, int n);

int main(void)
{
	int a[] = {0,1,2,3,4,5,6,7,8,9,98,1624,1337};
	reverse_array(a, 13);
	return (0);
}
