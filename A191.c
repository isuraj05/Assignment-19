#include<stdio.h>
#include<conio.h>
int main()
{
	char s[5][100];
	int i,j,count=0,str=1;
	printf("Enter five strings: ");
	for(i=0;i<5;i++)
		fgets(s[i],100,stdin);
		
	for(i=0;i<5;i++)
	{
		for(j=0;s[i][j];j++)
		{
			if(s[i][j]=='a'||s[i][j]=='A'||s[i][j]=='e'||s[i][j]=='E'||s[i][j]=='i'||s[i][j]=='I'||s[i][j]=='o'||s[i][j]=='O'||s[i][j]=='u'||s[i][j]=='U')
				count++;
		}
		printf("\nNumber of vowels in string-%d is %d\n",str,count);
		count=0;
		str++;
	}
	getch();
}
