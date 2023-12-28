#include<stdio.h>

void size(int a[] ,int tsize)
{
	int len;
	
	len = tsize/sizeof(0);
	printf("Length of Array = %d\n",len);
}

main()
{
	int a[] = {1,10,12,20,23,30,34,40,50};
	
	size(a,sizeof(a));
}