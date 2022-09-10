#include<stdio.h>
#include<conio.h>

int main()
{
	int i,j,w1,w2,n;
	
	printf("How many words you want to enter: ");
	scanf("%d",&n);
	
	char s[n][20],word[2][20];	
	
	printf("\nEnter %d words: ",n);
	fflush(stdin);
	for(i=0;i<n;i++)
		fgets(s[i],20,stdin);
			
	printf("\nChoose two words from the list to see the minimum distance between them: ");
	fflush(stdin);	
	for(i=0;i<2;i++)
		fgets(word[i],20,stdin);
	
	for(i=0;i<n;i++)
	{
		for(j=0;s[i][j];j++)
		{
			if(s[i][j]==word[0][j])
				w1=i;
			else if(s[i][j]==word[1][j])
				w2=i;
			else
				break;	
		}
	}
	printf("\nThe minimum distance between the two given words - %d",(w2-w1)-1);	
	getch();
}	
