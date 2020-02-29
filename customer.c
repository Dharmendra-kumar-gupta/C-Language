#include<stdio.h>
void name_print(char n[])
{
	printf("%s\n",n);

}
void bal_print(int b)
{
	printf("%d\n",b);
}
struct customer
{
	char name[50];
	int account,balance;
};

int main()
{
	struct customer c;
	int n,i,b;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s",c.name);
		scanf("%d%d",&c.account,&c.balance);
	
	//for(i=0;i<n;i++)
	//{
	  if(c.balance<200)
		{
			name_print(c.name);
		}
		if(c.balance>1000)
		{
			b=c.balance+100;
			bal_print(b);
		}
	}
return 0;
}
		

