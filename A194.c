#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
	int n,i,j;
	printf("How many strings you want to enter: ");
	scanf("%d",&n);
	
	char s[n][100],srch[100];
	printf("\nEnter %d strings: ",n);
	fflush(stdin);
	for(i=0;i<n;i++)
		fgets(s[i],100,stdin);
		
	printf("\nEnter the string you want to search: ");
	fflush(stdin);
	fgets(srch,100,stdin);
	
	for(i=0;i<n;i++)
	{
		if(strcmp(s[i],srch)==0)
		{
			printf("\nString found in index:- %d\n",i);
			break;
		}
	}
	
	getch();
}
