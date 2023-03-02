#include<stdio.h>

int main (){
	
	int a , b , c , d ;
	
	printf("Enter a value A : ");
	scanf("%d",&a);
	
	printf("Enter a value B : ");
	scanf("%d",&b);
	
	printf("Enter a value C : ");
	scanf("%d",&c);
	
	printf("Enter a value D : ");
	scanf("%d",&d);
	
	if(a>b){
		
		if(a>c){
			
			if(a>d){
				printf("A is MAX");
			}
			else{
				printf("D is MAX");
			}
		}
		else{
			
			if(c>d){
				printf("C is MAX");
			}
			else{
				printf("D is MAX");
			}
		}
	}
	else{
		
		if(b>c){
			
			if(b>d){
				printf("B is MAX");
			}
			else{
				printf("D is MAX");
			}
		}
		else{
			if(c>d){
				printf("C is MAX");
			}
			else{
				printf("D is MAX");
			}
		}
	
	}
	
	return 0 ;
}
