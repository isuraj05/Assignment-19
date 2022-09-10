#include<stdio.h>
#include<conio.h>
#include<string.h>

void factorial();
int main()
{
	int i,j=0;
	
	char s[3][2][20]={{"isuraj05","24445"},{"adsowner00","12345"},{"mdhit20","2000"}},un[20],pw[20];
			
	printf("Enter username: ");
	fgets(un,20,stdin);
	un[strlen(un)-1]='\0';
	
	printf("\nEnter password: ");
	fflush(stdin);
	fgets(pw,20,stdin);
	pw[strlen(pw)-1]='\0';	
	
	for(i=0;i<3;i++)
	{
		if(strcmp(s[i][0],un)==0 && strcmp(s[i][1],pw)==0)
		{
			printf("\nLogin Successful");
			j++;
			break;
		}
	}
	
	if(j==0)
		printf("\nIncorrect Username or Password");
		
	getch();
}	
