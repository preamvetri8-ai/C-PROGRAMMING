#include<stdio.h>
int main()                   
{
	int a,b,c;
	scanf("%d %d %d",&a,&b,&c);
	   if(a==b&&c==a&&b==c){
   	printf("given triangle is a equilateral tringle");
	   }
	      else if(a==b||b==c&&a==c||b==c&&a==b||a==c){
		   printf("given triangle is a isoscels tringle");
		}
		  else
		  printf("given triangle is a scalene tringle");	  
      return 0;
}       

