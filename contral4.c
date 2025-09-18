#include<stdio.h>
int main()
{
  int a,b,c;
  scanf("%d%d",&a,&b);
  c=a-b;
  if(c%2==0){
  	printf("%d is a even",a);
  }
  else 
  printf("%d is a odd",b);
  return 0;
}