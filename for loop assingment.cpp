// for loop
#include<stdio.h>
int main(){
	int i, start, stop, sum=0;
	printf("enter when to start\n");
	scanf("%d",start);
	
	printf("enter when to stop\n");
	scanf("%d", stop);
	for(i= start;i<= stop;i++){
		printf("%d",i);
		sum =+ i;
	}
	printf("sum = %d", sum);
	return 0;
}