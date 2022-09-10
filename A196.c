#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
	int n,i,j,k,l,count=0;
	printf("How many strings you want to enter: ");
	scanf("%d",&n);
	char s[n][100],t[n][100];
	printf("\nEnter %d strings: ",n);
	fflush(stdin);
	
	for(i=0;i<n;i++)
		fgets(s[i],100,stdin);
		
	s[i][strlen(s[i])-1]='\0';
	
	for(i=0;i<n;i++)
	{
		k=0;
		for(j=0;s[i][j];j++)
		{
			if(s[i][j]>='a' && s[i][j]<='z')
				t[i][j-k]=s[i][j];
				
			else if(s[i][j]>='A' && s[i][j]<='Z')
					t[i][j-k]=s[i][j]+32;
			else
				k++;
		}
	}
	
	for(i=0;i<n;i++)
	{
		l=1;
		for(j=0;t[i][j];j++)
		{
			if(t[i][j]==t[i][strlen(t[i])-l])
				l++;	
			else
				break;
		}
		if(t[i][j]=='\0')
		{
			printf("\n%s",s[i]);
			count++;	
		}
	}
	if(count==0)
		printf("\nNo string is palindrome");
	getch();
}	
