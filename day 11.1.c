#include<stdio.h>

int main () {
	
	char a;
	
	printf("Enter any value :");
	scanf("%c",&a);
	
	 if ((a>= 'A'&& a<='Z') || (a>='a' && a<='z')){
		
		
		printf("This is Alphabet");
		
	}
	
	 else
	      if(a>='0') {
	      	
	      	printf (" This is Digit");
	      	
    }
	 else{
	 	
	 	printf ("This is spe. Alphabet");
	 	
	 }	
	return 0;
	
}
