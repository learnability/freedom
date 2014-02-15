/* This is a simple programme for calculator. It performs addition, substraction, multiplication and division of any two numbers. You can input the numbers from the command line and the result will be displayed. */


#include<stdio.h>
void menu();
int mod(int,int);

float add(float,float);
float sub(float,float);
float mul(float,float);
float div(float,float);
void main()//main function
{
menu();
}
void menu(){//function menu
	float a,b,r;
	int ch,m,n,rn;
	do{
		printf("\n1.add\n2.sub\n3.mul\n4.div\n5.exit\n6.log\n7.pow\n8.mod\nenter ur choice::");
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
			case 6:printf("\nenter num:");
				scanf("%d",&n);
				rn=log(n);
				printf("\nresult=%d",rn);
				break;
			case 7:printf("\nenter:");
				scanf("%d%d",&m,&n);
				rn=pow(m,n);
				printf("\nresult=%d",rn);
				default :break;
			case 8:printf("\nenter");
				scanf("%d%d",&m,&n);
				rn=mod(m,n);
				printf("\nResult=%d",rn);
				break;
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
int mod(int a,int b)
{
	return a%b;
}
