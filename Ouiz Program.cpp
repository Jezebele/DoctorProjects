#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void welcome()
{
	printf("Welcome to Quiz Program.\nPlease Read The Following Rules.\n\n");
	printf("RULES : \n");
	printf("[1]_Quiz Program Has A Point System.\n");
	printf("[2]_Enter Your Name And Surname.\n");
	printf("[3]_If You Do Not Have A Register Please Sign Up.\n\n");
}

int decision()
{	
	int option;
	
	printf("\nPlease Choose An Option.\n\n[1]_Sign In.\n[2]_Create An Account\n");
	scanf("%d",&option);
	
	return option;
}

int entry(char name[40],char password[40])
{
	char namedata[100];
	char passworddata[100];
	bool control = false;
	
	while(control == false)
	{
	
	printf("Please Type  Your Name  : \n");
	scanf("%s",&namedata);
	printf("Please Enter Your Password : \n");
	scanf("%s",passworddata);
	if(strcmp(name,namedata) == 0 && strcmp(password,passworddata) == 0)
	{
		printf("\nWelcome To Quiz Program.Let's Enjoy...\n\n");
		control = true;
	}
	
	else
	{
		printf("Invalid Information Detected.Try Again To Log In...\n\n");
	}
	
	}
}

int enroll()
{
	char newname[100];
	char newpassword[100];
	
	printf("Enter Your Name You Want To Use : ");
	scanf("%s",&newname);
	printf("\n");
	printf("Enter Your Password You Want To Use : ");
	scanf("%s",&newpassword);
	printf("\n");
	printf("*****You Have Successfully Registered*****\n");
	printf("*****You Are Directed To Login Screen.*****\n\n");
	
	entry(newname,newpassword);
}

int Quiz()
{	
	char answer[2];
	int point = 0;
	
	printf("Competiton Has Already Begun...\n");
	printf("Question 1 : What Is The Capital City Of Turkey ? \n");
	printf("[A]_Istanbul\n[B]_Ankara\n[C]_Batman\n[D]_Antalya\n");
	scanf("%s",&answer);
	
	if(strcmp(answer,"B ") == 0)
	{
		printf("Correct !!!\n\n");
		point += 10;
		printf("Your Current Point : %d\n\n",point);
		
	}
	
	else if(answer == "A" || answer == "C" || answer == "D" || answer == "E")
	{
		printf("Incorrect !!!\n");
		printf("Your Current Point : %d\n",point);
	}
	
}

int main ()
{	
	char name[40] = "Cross";
	char password[40] = "12345";
	
	welcome();
	int option = decision();
	
	if(option == 1)
	{
		entry(name,password);
	}
	else if(option == 2)
	{
		enroll();
	}	
	
	Quiz();
	
	return 0;
}
