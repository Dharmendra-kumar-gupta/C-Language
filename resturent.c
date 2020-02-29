#include<stdio.h>
int item,quantity;
float bill,b;
void calculate(int q,float a)
{
	b=q*a;
	bill=b+(b*5)/100;
	printf("%.2f",bill);
}
int main()
{
	scanf("%d%d",&item,&quantity);	
	printf("Plain Egg $1.45\n");
	printf("Bacon and Egg $2.45\n");
	printf("Muffin &0.99\n");
	printf("French Toast $1.99\n");
	printf("Fruit Basket $2.49\n");
	printf("Cereal $0.69\n");
	printf("Coffee $0.50\n");
	printf("Tea $0.75\n");
	switch(item)
	{
		case 1:	calculate(quantity,1.45);
		break;
		case 2:	calculate(quantity,2.45);
		break;
		case 3:	calculate(quantity,0.99);
		break;
		case 4:	calculate(quantity,1.99);
		break;
		case 5:	calculate(quantity,2.49);
		break;
		case 6:	calculate(quantity,0.69);
		break;
		case 7:	calculate(quantity,0.50);
		break;
		case 8:	calculate(quantity,0.75);
		break;
	}
}	

