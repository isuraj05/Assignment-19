#include<stdio.h>
#include<conio.h>

int main()
{
	int n,i;
	printf("How many strings you want to enter: ");
	scanf("%d",&n);
	
	char s[n][100];
	printf("\nEnter %d strings: ",n);
	fflush(stdin);
	for(i=0;i<n;i++)
		fgets(s[i],100,stdin);
	
	for(i=0;i<n;i++)
		printf("\n%s",s[i]);
	getch();
}
