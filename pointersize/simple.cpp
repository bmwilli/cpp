#include<stdio.h>
int main()
{
	int x=29;
	double y=3.14;
	char c='N';
	printf("Size of int: %d bytes\nSize of double: %d bytes\nSize of float: %d bytes\nSize of character: %d byte",sizeof(x),sizeof(y),sizeof(float),sizeof(c));
	return 0;
}