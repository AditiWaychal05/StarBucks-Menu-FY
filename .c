#include <stdio.h>
#include <conio.h>

void drinks();
void food();
void discount();
void aexit();
void mmenu();

int num,choice, coupon;	
float price, dis;
int total, gtotal;
int di,dii,diii;
int fi,fii,fiii;
char again;

void main()
{
	mmenu();
}
void mmenu()
{
	char choice = ' ' ;
  printf("\n\n\n\t\t\tSTARBUCKS ");
  printf("\n\tExperience The Authentic Blend of Coffee ");
  printf("  \n\n\n>> Please select the meal that you would like to purchase. << \n\n");
  printf("\t\t      [A] Drinks\n");
  printf("\t\t      [B] Food\n");
  printf("\t\t      [C] Exit\n");
  printf("Enter your choice here : ");
  scanf("%c", &choice);
  system("cls");
  {
  	if(choice== 'A')
  	drinks();
  	else if(choice== 'B')
  	food();
  	else if(choice== 'C')
  	discount();
  	else 
    mmenu();
  }
}
void drinks()
{
	int choice = 0; 
    int quantity = 0;
    int again = 0;
    printf("                 .Welcome to Starbucks.          \n ");
    printf("             +============================+          \n\n");
    printf("                     ___ Drinks ___                         ");
    printf("\n   Please select the drink that you would like to purchase.  \n\n");
    printf("\t\t   [1] Duo Cocoa Mocha                      - Rs.345\n");
    printf("\t\t   [2] White Mocha Coconut Barfi Latte      - Rs.345\n");
    printf("\t\t   [3] Iced Duo Cocoa Mocha                 - Rs.370\n");
    printf("\n\n Enter your choice here : ");
    scanf("%d", &choice);
    {
    	if(choice == 1)
    	{
    		printf("Enter quantity : ");
	        scanf("%d", &quantity);
	        di= 345 * quantity;
	        printf("Your total amount is Rs. %d , Please pay at the counter\n\n\n ", di); 
	        printf("\nWould you like to buy anything else?\n[1] Yes , [2] No : "); 
			scanf("%d", &again);
			system("cls");
		
			 if (again == 1 )
				drinks();
			 else if (again == 2 )
				mmenu();
			else
				{
				 printf("\n\n\t\tSorry Invalid Decision Entered\n\n\n\n");
				 aexit();
	        	}
	    }
	    else if(choice==2)
	    {
	    	printf("Enter quantity : ");
	        scanf("%d", &quantity);
	        dii = 345 * quantity ;
	        printf("Your total amount is Rs. %d , Please pay at the counter\n\n\n ", dii); 
	        printf("\nWould you like to buy anything else?\n[1] Yes , [2] No : "); // Allows user to choose whether to check-out or buy anything else.
			scanf("%d", &again);
			system("cls");
		
			 if (again == 1 )
				drinks();
			 else if (again == 2 )
				mmenu();
			else
				{
				 printf("\n\n\t\tSorry Invalid Decision Entered\n\n\n\n");
				 aexit();
	        	}
		}
		else if(choice==3)
		{
			printf("Enter quantity : ");
	        scanf("%d", &quantity);
	        diii = 375 * quantity ;
	        printf("Your total amount is Rs. %d , Please pay at the counter\n\n\n ", diii); 
	        printf("\nWould you like to buy anything else?\n[1] Yes , [2] No : "); 
			scanf("%d", &again);
			system("cls");
		
			 if (again == 1 )
				drinks();
			 else if (again == 2 )
				mmenu();
		}
		else 
		{
			printf("Invalid Input, Try Again!");
		}
    }
}
void food()
{
	int choice;  
    int quantity;
    int again;
    printf("                 .Welcome to Starbucks.          \n ");
    printf("             +============================+          \n\n");
    printf("                     ___ Food ___                         ");
    printf(" \n && Please select the drink that you would like to purchase. && \n\n");
    printf("\t\t   [1] Chilli cheese toast                 - Rs.280\n");
    printf("\t\t   [2] Blueberry Muffin                    - Rs.255\n");
    printf("\t\t   [3] Double Chocolate Chip Cookie        - Rs.230\n");
    printf("\n\n Enter your choice here : ");
    scanf("%d", &choice);
    {
    	if (choice == 1)
    	{
    		printf("Enter quantity : ");
	  scanf("%d", &quantity);
	  fi = 280 * quantity ;
	  printf("Your total amount is Rs. %d , Please pay at the counter\n\n\n ", fi); 
	  {
		printf("\nWould you like to buy anything else?\n[1] Yes , [2] No : ");
		scanf("%d", &again);
		system("cls");
		if (again == 1 )
			food();
		else
			if (again == 2 )
				mmenu();
		else
			{	
			 printf("\n\n\t\tSorry Invalid Decision Entered\n\n\n\n");
			 aexit();
			}
		}
		}
		else if (choice == 2)
		{
			printf("Enter quantity : ");
	        scanf("%d", &quantity);
	        fii = 280 * quantity ;
	        printf("Your total amount is Rs. %d , Please pay at the counter\n\n\n ", fii); 
	  {
		printf("\nWould you like to buy anything else?\n[1] Yes , [2] No : ");
		scanf("%d", &again);
		system("cls");
		if (again == 1 )
			food();
		else
			if (again == 2 )
				mmenu();
		else
			{	
			 printf("\n\n\t\tSorry Invalid Decision Entered\n\n\n\n");
			 aexit();
			}
		}
		}
		else if( choice == 3)
		{
			printf("Enter quantity : ");
	        scanf("%d", &quantity);
	        fiii = 280 * quantity ;
	        printf("Your total amount is Rs. %d , Please pay at the counter\n\n\n ", fiii); 
	  {
		printf("\nWould you like to buy anything else?\n[1] Yes , [2] No : ");
		scanf("%d", &again);
		system("cls");
		if (again == 1 )
			food();
		else
			if (again == 2 )
				mmenu();
		else
			{	
			 printf("\n\n\t\tSorry Invalid Decision Entered\n\n\n\n");
			 aexit();
			}
		}
		}
		else 
		{
			printf ("Invalid Input, Try Again!");
		}
		
	}
}
void discount()
{
	total=(di+dii+diii)+(fi+fii+fiii);
	printf("Enter Coupon Code: ");
	scanf("%d",&coupon);
	if (coupon == 10)
	{
		printf("Coupon Code Applied of 10% ");
		system("cls");
		dis=(float)10/100*total;
		{
			aexit();
		}
	}
	else
	{
		printf("Invalid Code x_x");
		gtotal=total;
	}
}
void aexit()
{
	printf ("\t\t|__INVOICE__|");
	printf("\nTotal Price = %d",total);
	printf("\nDiscount= %f", dis);
	gtotal= total-dis;
    printf("\n\nYour total amount is Rs. %d , Please pay at the counter\n\n\n ", gtotal); 

	printf("\n\n                  Thank You              \n ");
    printf("           +============================+          \n\n");
    printf("                ___Visit Us again___\n\n");
    getch();
}
