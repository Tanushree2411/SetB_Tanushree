#include<string.h>

void removeElements(char a[],int n)
{
int j=0,k=0;
char b[10],c[10];
for(int i=0;i<n;i++)
{
	if(a[i]==a[i+1])
	{
		a[i]='x';
		a[i+1]='x';
	}
}
for(int i=0;i<n;i++)
{
	if(a[i]!='x'){
		b[j]=a[i];
		j++;
	}
}

for(int i=0;i<strlen(b);i++)
{
	if(b[i]==b[i+1])
	{
		b[i]='x';
		b[i+1]='x';
	}
}
for(int i=0;i<strlen(b);i++)
{
	if(b[i]!='x'){
		c[k]=b[i];
		k++;
	}
}

for(int i=0;i<strlen(b);i++)
{
	printf("%c",c[i]);
}

}


int main()
{
int n;
char a[n],b[n];
scanf("%d",&n);
scanf("%s",a);

removeElements(a,n);


return 0;
}
