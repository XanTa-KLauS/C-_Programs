/* AUTHOR - Jayesh Waghmare 
	## money counter version 1.0
	* DATE - 11 july 2019
	* Description : This source code is to count the denominations of 
	* Indian INR and then keep the track of bills and money in the 
	* counter */
#include<stdio.h>
 int initialise()
{
int d_1 , d_2 , d_5 , d_10 , d_20 , d_50 , d_100 , d_200 , d_500 , d_2000;
int Sum;
printf("enter Rs 1 count = ");
scanf("%d" , &d_1);
d_1 = d_1*1;
printf("enter Rs 2 count = ");
scanf("%d" , &d_2);
d_2 = d_2*2;
printf("enter Rs 5 count = ");
scanf("%d" , &d_5);
d_5 = d_5*5;
printf("enter Rs 10 count = ");
scanf("%d" , &d_10);
d_10 = d_10*10;
printf("enter Rs 20 count = ");
scanf("%d" , &d_20);
d_20 = d_20*20;
printf("enter Rs 50 count = ");
scanf("%d" , &d_50);
d_50 = d_50*50;
printf("enter Rs 100 count = ");
scanf("%d" , &d_100);
d_100 = d_100*100;
printf("enter Rs 200 count = ");
scanf("%d" , &d_200);
d_200 = d_200*200;
printf("enter Rs 500 count = ");
scanf("%d" , &d_500);
d_500 = d_500*500;
printf("enter Rs 2000 count = ");
scanf("%d" , &d_2000);
d_2000 = d_2000*2000;
Sum = d_1 + d_2 +d_5 + d_10 + d_20 + d_50 + d_100 + d_200 + d_500 +d_2000;
return Sum;
}
int difference ()
{
	int bill,cashGiven,difference;
	printf(" \n Please enter the bill amount");
			scanf("%d" , &bill);
			printf(" \n Please enter the cash  given");
			scanf("%d" , &cashGiven);
			difference = cashGiven - bill;
			return difference;
}

///// version 1.1 create a function that calculates denominations 
///// in the counter and denominations in difference to be given.
void main() 
{
	
	int Money ;
	int toBeGiven ;
	int i ;
	int true = 1;
	Money = initialise() ;
	printf(" Initial money on counter = %dMoney ",Money);
	
	// loop begins
	while (true)
		{
			
			difference = difference();
			if ( difference == 0 ) 
				{
					Money = Money +cashGiven;
					printf(" \n ThankYou So much");
					
				}
			else 
				{
					printf("\nyou have to return %d Rs. " , difference);
					printf(" \n ThankYou So much");
					Money = Money - difference + cashGiven;
				}
			printf(" \n The money now in counter = %d" , Money);
				
		}
	
	
}
	  
	



