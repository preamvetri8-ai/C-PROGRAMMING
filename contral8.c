#include<stdio.h>
int main()
{
  int a;
  scanf("%d",&a);
  a=a%10;
 if(a%3==0){
  	printf("%d is a divisable by 3 ",a);
  }
  else 
  printf("%d is a not  divisable by 3 ",a);
  return 0;
}