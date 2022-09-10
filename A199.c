#include<stdio.h>
#include<conio.h>
#include<string.h>

void factorial();
int main()
{
	int i,j,n;
	
	char s[5][20]={"isuraj05","adsowner00","mdhit20","mysirg10","pratj99"},un[20];	

	for(i=0;i<5;i++)
		printf("\n%s\n",s[i]);
			
	printf("\nChoose any username from the list to calculate the factorial of a number: ");	
	fflush(stdin);
	fgets(un,20,stdin);
	
	un[strlen(un)-1]='\0';
	
	for(i=0;i<5;i++)
	{
		for(j=0;s[i][j];j++)
		{
			if(s[i][j]==un[j])
				continue;
			else
				break;
		}
		if(s[i][j]=='\0')
		{
			factorial();
			break;
		}
	}
	
	if(i==5)
		printf("\nIncorrect Username");
		
	getch();
}	

void factorial()
{
	int i,n,f=1;
	printf("\nEnter a number: ");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
		f=f*i;

	printf("\nFactorial of the given number is %d",f);
}
