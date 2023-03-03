#include <stdio.h>

void main() {
	printf("輸入一個數:");
	int number=0;
	int b = 1;
	int num[100] ;
	int index = 0;	
	int count = -1;
	scanf("%d",&number);
	int a=number;
	int c=1;
	int index2=0;
	int num2[100];
	while (b) {
		num[index] = number % 2; 
		number /= 2; 
		index++;
		count++; 
		if (number == 0) {
			b = 0;
		}
	}
	printf("\n二進制為：");
	for (int i = count; i >=0; i--) { 
			printf("%d",num[i]);
	}
	getchar();
	getchar();
	while (c) {
		num2[index2++] = a % 16;
		a /= 16;
		if (a == 0) {
			c = 0;
		}
	}
	printf("\n十六進制為：");
	for (int i = index2-1; i >= 0; i--) {
		if (num2[i]==11){
		    printf("A");
		}
		if (num2[i]==12){
		    printf("B");
		}
        if (num2[i]==12){
		    printf("C");
        }
		if (num2[i]==13){
		    printf("D");
		}
		if (num2[i]==14){
		    printf("E");
		}
		if (num2[i]==15){
		    printf("F");
		}
	    if (num2[i]<=10){
		    printf("%d",num2[i]);
		}
	}
	getchar();
	getchar();
}