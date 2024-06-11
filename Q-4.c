#include<stdio.h>

main(){
	
	char str[] = "Hello Good Morning, How Are You?";
	int ln,r,n=0;
	
	printf("Normal string :- %s", str);
	
	ln = strlen(str);
	
	for(r=0; r<=ln; r++){
		if(str[r]==' '){
			n++;
		}
	}
	
	printf("\nCount total number of words in a string = %d", n+1);
}