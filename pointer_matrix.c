#include<stdio.h>
void main()
{
	int a[5][5],b[5][5],c[5][5],i,j,m,n;
	printf("Entr m & n: ");
	scanf("%d%d",&m,&n);
	printf("Ente 1 mafk");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",(*(a+i)+j));
		}
	}
	printf("Ener 2nd mar");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",(*(b+i)+j));
		}
	}
	printf("Add of matrfa\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			*(*(c+i)+j)=*(*(a+i)+j)+*(*(b+i)+j);
			printf("%d",*(*(c+i)+j));
		}
	}
}
