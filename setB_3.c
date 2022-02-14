#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void reverseElements(int arr[])
{
int t,x=4;
//int x=sizeof(arr)/sizeof(arr[0]);
for(int i=0;i<x;i++)
{
	t=arr[i];
	arr[i]=arr[x-i-1];
	arr[x-i-1]=t;
}
for(int i=0;i<x;i++)    
{    
printf("%d",arr[i]);    
}     
printf("\n");
}

int main(){  
int n,i;    
int a[10];
//system ("cls"); 
printf("Enter the number to convert: ");    
scanf("%d",&n);    
for(i=0;n>0;i++)    
{    
a[i]=n%2;    
n=n/2;    
}    
printf("\nBinary of Given Number is=");  
/*for(i=i-1;i>=0;i--)    
{    
printf("%d",a[i]);    
}     
printf("\n");*/

reverseElements(a);
}
