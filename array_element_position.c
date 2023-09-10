#include<stdio.h>
main()
{
	int a[10],i,n,pos,ele,flag;
	printf("enter no elements..:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("\nenter element at a[%d]:",i);
		scanf("%d",&a[i]);
	}
	printf("\narray elements are..:");
	for(i=0;i<n;i++)
	{
		printf("%5d",a[i]);
	}
	printf("\nenter element whose position is to be found..:");
	scanf("%d",&ele);
	for(i=0;i<n;i++)
	{
		if(a[i]==ele)
		{
			flag=1;
			pos=i+1;
			break;
		}
	}
	if(flag==1)
	{
		printf("\n position=%d",pos);
	}
	else
	{
		printf("\n position not found");
	}
}
