#include<stdio.h>

main()

{
	
	char email[100]="kathiriyakrish18@gmail.com";
	char pass[100]="Krish@18";
	char email1[100];
	char pass1[100];
	
	printf("enyer yor email");
	gets(email);
	printf("enter your password=");
	gets(pass);
	
	if(strcmp(email,email1)==0)
	{
		if(strcmp(pass,pass1)==0)
		{
			printf("login successfuiiy.");
		}
		else
		{
			printf("your password incorrect and please try again!");
		}
	}
	else
	{
		 printf("wrong your emil and please try again!");
	}

}
	

	
	
	
	
	
	
	
	
	
	
	
