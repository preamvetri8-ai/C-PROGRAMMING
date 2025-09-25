#include<stdio.h>
#include <ctype.h>
int main (){
	char ch;
	printf("enter a character:");
	scanf("%c",&ch);
	if(isupper(ch)){
    printf("'%c'is an uppercase leter.\n",ch);
  }else if(islower(ch)) {
  	printf("'%c'is an lowercase leter.\n",ch);
  }else if(isdigit(ch)){
  	printf("'%c'is a digit.\n",ch);
	  }else{
    printf("'%c'is a special symbol.\n",ch);
			     			 
	  }
	     return 0;
}