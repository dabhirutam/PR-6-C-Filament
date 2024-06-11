#include<stdio.h>

main(){
	
	char str[50], str2[50];
	int ln,r,c;
	
	printf("Enter the word :- ");
	scanf("%s", &str);
	
	ln = strlen(str);
	
	for(r=0; r<ln; r++){
		
		str2[(ln-(r+1))] = str[r];
	}
	
	c = strcmp(str2,str);
	
	if(c==0){
		printf("\nYour word is palindrome");
	}else{
		printf("\nYour word is not palindrome");
	}
}