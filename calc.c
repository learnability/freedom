#include<stdio.h>
void menu();
float add(float,float);
float sub(float,float);
float mul(float,float);
float div(float,float);

void main(){
menu();
}
void menu(){
	float a,b,r;
	int ch;
	do{
		printf("\n1.add\n2.sub\n3.mul\n4.div\n5.exit\nenter ur choice::");
		scanf("%d",&ch);
		if(ch!=5){
			printf("\nenter numbers:\n");
			scanf("%f%f",&a,&b);
		}
		switch(ch){
			case 1:r=add(a,b);
				printf("\nResult=%f",r);
				break;
			case 2:r=sub(a,b);
				printf("\nResult=%f",r);
				break;
			case 3:r=mul(a,b);
				printf("\nResult=%f",r);
				break;
			case 4:r=div(a,b);
				printf("\nResult=%f",r);
				break;
			case 5:break;
				default :break;
		}
	}while(ch!=5);
}

float add(float a,float b){
	return a+b;
}
float sub(float a,float b){
	return a-b;
}
float mul(float a,float b){
	return a*b;
}
float div(float a,float b){
	if(b!=0)
		return a/b;
	else
		printf("\ndivide by zero!!\n");
}
