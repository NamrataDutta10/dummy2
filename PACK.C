#include<stdio.h>
#define P printf
#define S scanf
void main()
{
	int a[100],b[100],n,k=0,p=-1,i;
	clrscr();
	P("Enter dimension\n");
	S("%d",&n);
	P("Enter %d elements\n",n);
	for(i=0;i<n;i++)
	S("%d",&a[i]);
	for(i=0;i<n;i++)
	{
		if(a[i]!=p)
		{
		p=a[i];
		b[k++]=p;
		}
	}
	P("Packed data\n");
	for(i=0;i<k;i++)
	P("%d ",b[i]);
	getch();
}