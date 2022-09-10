#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
	char s[10][100],temp[100];
	int i,j,k;
	printf("Enter ten city names: ");
	for(i=0;i<10;i++)
		fgets(s[i],100,stdin);
		
	for(i=0;i<10-1;i++)
	{
		for(j=i;j<10-1;j++)
		{
			for(k=0;s[i][k];k++)
			{
				if(s[i][k]==s[j+1][k])
					continue;
				else if(s[i][k]>s[j+1][k])
				{
					strcpy(temp,*(s+i));
					strcpy(*(s+i),*(s+j+1));
					strcpy(*(s+j+1),temp);
					break;
				}
				else
					break;
			}
		}	
	}
	
	for(i=0;i<10;i++)
		printf("\n%s",s[i]);
	getch();
}
