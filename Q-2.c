#include<stdio.h>

main(){
	
	char str[] = "Hello Good Morning, How Are You ?";
	int ln,r;
	
	printf("Normal string :- %s", str);
	
	ln = strlen(str);
	
	printf("\n\nRemove White Space :- ");
	for(r=0; r<=ln; r++){
		if(str[r]!=' '){
			printf("%c",str[r]);
		}
	}
}