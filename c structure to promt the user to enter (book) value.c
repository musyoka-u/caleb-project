#include<stdio.h>
#include<string.h>
struct  book{
	char title[30];
	char author [20];
	int publication ;
	char ISBN [13];
	float price;
} book;
int main(){
	printf("enter the title \n");
	scanf("%s",&book.title);
	
	printf("enter the author \n");
	scanf("%s",&book.author);
	
	printf("enter publication \n");
	scanf("%d",&book.publication);
	
    printf("enter the ISBN \n");
	scanf("%s",&book.ISBN);
	
    printf("enter the price \n");
	scanf("%f",&book.price);
	
	return 0;
}