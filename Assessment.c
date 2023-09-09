#include<stdio.h>
int main()
{
	int pizza=1,burger=2,dose=3,idli=4,food,quantity,total;
	char ch;
	do{
	
	printf("============MENU============\n");
	printf("1.Pizza..............price 180 \n");
	printf("2.Burger..............price 120 \n");
	printf("3.Dose..............price 100 \n");
	printf("4.Idli..............price 50 \n");
	
	printf("Enter Your Food Item :");
	scanf("%d",&food);
	
		switch(food)
	{
		case 1: printf("You have enter Pizza \n ");
		          printf("enter the quantity :");
                  scanf("%d",&quantity);
	              total=quantity*180;
	              printf("Total bill is : %d", total);
		          break;
		case 2: printf("Burger ");
		        printf("enter the quantity :");
                  scanf("%d",&quantity);
	              total=quantity*180;
	              printf("Total bill is : %d", total);
		          break;
		case 3: printf("Dose ");
		           break;
		case 4: printf("Idli ");
		           break;
				   		            
		   default: printf("wrong input....");       
	}
	 printf("\nDo you want to continue : y/n\n");
	 ch=getch();
 }
    while(ch=='y'||ch=='Y');
	}
