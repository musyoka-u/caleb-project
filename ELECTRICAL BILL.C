// program to calculate electrical bill
#include<stdio.h>
int main (){
	
	// declearing variables
	float customerID;
	char customerName;
	float unitConsumed;
	float fine;
	float totalbill,surcharge;
	float charges;
	
	printf("ENTER CUSTOMERID \n");
	scanf("%f",&customerID);
	
	printf("ENTER CUSTOMERNAME \n");
	scanf("%s",&customerName);
	
	printf("ENTER UNITCONSUMED \n");
	scanf("%f",&unitConsumed);
	
	if( unitConsumed > 0 && unitConsumed <= 199){
		fine = unitConsumed * 1.20 ;
	}else if (unitConsumed >=200 && unitConsumed < 400){
		fine = unitConsumed * 1.50 ;
	}else if (unitConsumed >=400 && unitConsumed < 600 ){
		fine = unitConsumed * 1.80 ;
	}else if( unitConsumed >=600){
		fine = unitConsumed * 2.00;
	}
	// formular to calclate total bill
	totalbill = unitConsumed * charges;
	
	if(totalbill >400){
		surcharge = totalbill * 0.15;
		totalbill =+ surcharge;
	}
	if(totalbill <100){
		totalbill = 100;
	}
	printf("TOTAL AMOUNT TO PAY %f\n",totalbill);
		return 0;
}
