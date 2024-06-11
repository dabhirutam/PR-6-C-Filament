#include<stdio.h>

main(){
	
	char str[50];
	int ln,r;
	
	printf("Enter Your Massage :- ");
	scanf("%s", &str);
	
	printf("\nNormal string :- %s", str);
	
	ln = strlen(str);
	
	for(r=0; r<=ln; r++){
		if(str[r]>='A'&&str[r]<='Z'){
			str[r]+=32;
		}else if(str[r]>='a'&&str[r]<='z'){
			str[r]-=32;
		}
	}
	
	printf("\nToggle case of each character of a string :- %s", str);
}
