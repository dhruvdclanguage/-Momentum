#include<stdio.h>

int main (){
	
	char a ;
	
	printf("Type a first letter of week name to find it's full name : ");
	scanf("%c",&a);
	
	switch(a){
		
		case 'M':						
			printf("\n monday");
			break;
			 
		case 'T':
			printf("\n tuesday");
			break;
			
		case 'W':
			printf("\n wednesday");
			break;
			
		case 'H':
			printf("\n thursday");
			break;
			
		case 'F':
			printf("\n friday");
			break;
			
		case 'S':
			printf("\n saturday");
			break;
			
		case 'U':
			printf("\n sunday");
			break;
			
		
		
		default:
			printf("\n\nOops!!!\nEnter the proper first letter of week name to find it's full Name...");											
		
	}
	
	return 0 ;
}
