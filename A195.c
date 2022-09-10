#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
	int n,i,j,count=0;
	printf("How many email addresses you want to enter: ");
	scanf("%d",&n);
	
	char s[n][100];
	printf("\nEnter %d email addresses: ",n);
	fflush(stdin);
	for(i=0;i<n;i++)
		fgets(s[i],100,stdin);
	
	for(i=0;i<n;i++)
		s[i][strlen(s[i])-1]='\0';
		
	for(i=0;i<n;i++)
	{
		for(j=0;s[i][j];j++)
		{
			if(s[i][j]!='@')
				continue;
			else
				break;	
		}
		if(s[i][j]=='\0')
		{
			printf("\n%s has no @ sign in it!",s[i]);
			count++;	
		}
	}
	if(count==0)
		printf("\nAll the email addresses are valid!\n");
	
	getch();
}
