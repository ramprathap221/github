#include<stdio.h>
#include<conio.h>
int fun(int);//proto
void main()
{
	int a[100],i,n,m;
	clrscr();
	scanf("%d",&n); //5
    /*	n=fun(n);
	printf("rollno %d",n); */
	for(i=0;i<n;i++)
	{
		scanf("%d",a+i); //&a[i]==a+i==i+a
	}
	for(i=0;i<n;i++)
	{
		printf("%u",*(a+i));//a[i]==*(a+i)==*(i+a)
	}

	getch();
}
void fun(int size,)