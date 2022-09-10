#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
	int i,j,n,count;
	printf("How many IP addresses you want to enter: ");
	scanf("%d",&n);
	char s[n][100],*c;
	printf("\nEnter %d IP addresses: ",n);
	fflush(stdin);
	
	for(i=0;i<n;i++)
		fgets(s[i],100,stdin);	
		
	s[i][strlen(s[i])-1]='\0';
	
	for(i=0;i<n;i++)
	{
		count=0;
		c=strtok(s[i],".");
		while(c!=NULL)	
		{
			j=atoi(c);
			if(j>=0 && j<=255)
			{
				count++;
				c=strtok(NULL,".");
			}
			else
				break;
		}
		if(c==NULL && count==4)
			printf("\nIP address - %d is Valid",i+1);
		else
			printf("\nIP address - %d is Invalid",i+1);	
	}
	
	getch();
}	
