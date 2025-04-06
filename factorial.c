#include<stdio.h>  

int main()    
{    
	int i,fact=1,number;    
	printf("Please enter number of factorial: ");    
	scanf("%d",&number);    
		for(i=1;i<=number;i++){    
	    	fact=fact*i;    
		}    
  		printf("Result is: %d", fact);    
	return 0;  
}   


