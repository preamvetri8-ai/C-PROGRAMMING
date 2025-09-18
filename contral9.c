#include<stdio.h>
int main()
{
	int a;
	scanf("%d",&a);
	if(a&1){
	printf("%d is a odd",a);
	}
	else
		printf("%d is a even",a);
	return 0;
}