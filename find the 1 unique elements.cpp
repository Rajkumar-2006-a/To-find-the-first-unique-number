#include<stdio.h>
#include<string.h>
int main()
{
	char a[100];
	char b[100];
	int r,l;
	scanf("%[^\n]s",a);
	int n=strlen(a);
	for(int i=0;i<n;i++)
	{
		r=0;
		for(int j=0;j<n;j++)
		{
			if(a[i]!=a[j] && i!=j)
			{
				r++;
			}
		}
		if(r==n-1)
		{
			b[l]=a[i];
			l++;
		}
	}
	printf("%d\n",l);
	for(int i=0;i<l;i++)
	{
		printf("%c",b[i]);
	}
	printf("%c",b[0]);
}
