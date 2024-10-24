#include<stdio.h>
#include<string.h>
struct  book{
	char title[30];
	char author [20];
	int publication ;
	char ISBN [13];
	float price;
} book;
int main (){
	//declaration of variables
	strcpy(book.title,"intronduction to c prongraming");
	strcpy(book.author,"john smith");
	strcpy(book.ISBN,"9780131103627");
	book.publication = 2022;
	book.price = 49.99;
	
	//printing  the values on variables
	printf("etiles %s \n ",book.title);
	printf("author %s \n ",book.author);
	printf("ISBN %s \n",book.ISBN);
    printf("publication %d \n",book.publication);
	printf("price %.2f",book.price);
	return 0;
}