#include<stdio.h>
main()
{
	printf("pick a number-1,2,3,4,5\n");
	int choice=0;
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
			printf("Food item-pasta\nPrice-RS 179\n");
			break;
		case 2:
			printf("Food item-sandwich\nPrice-Rs 149\n");
			break;
		case 3:
			printf("Food item-pizza\nPrice-Rs239\n");
			break;
		case 4:
			printf("Food item- French Fries\nPrice-Rs 99\n");
			break;
		case 5:
			printf("Food item-Burger\nPrice-Rs 129\n");
			break;
		default : printf("invalid choice");		
	}
	return 0;
}
