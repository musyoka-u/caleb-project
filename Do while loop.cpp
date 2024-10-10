// do while loop
#include<stdio.h>
int main(){
	int i, start, stop, sum;
	printf("enter when to start\n");
	scanf("%d",start);
	
	printf("enter when to stop\n");
	scanf("%d", stop);
	 i= start;
	 do{
		 printf("%d",i);
		 i ++ ;
		 sum =+ i;
	 }
	 while (i <= stop);
	 printf("sum %d", sum);
	return 0;
}