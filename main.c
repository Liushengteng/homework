#include <stdio.h>
#include <stdlib.h>
#define SIZE 5
void show(int a[]),bubble(int a[]);
int main(int argc, char *argv[])
{
int FirstNumber,SecondNumber,ThirdNumber,ForthNumber,FifthNumber;   //設定變數 
printf("請輸入:");
scanf("%d %d %d %d %d",&FirstNumber,&SecondNumber,&ThirdNumber,&ForthNumber,&FifthNumber);   //輸入變數數字 
int data[SIZE]={FirstNumber,SecondNumber,ThirdNumber,ForthNumber,FifthNumber}; //陣列排序 
printf("排序前..\n");
show(data);       //呼叫函數 
bubble(data);     //氣泡排序 
printf("排序後..\n");
show(data);       //呼叫函數
system("PAUSE"); 
return 0;
}
void show(int a[])   //顯示函數 
{ 
	int i;
	for(i=0;i<SIZE;i++)
	printf(" %d",a[i]);
	printf("\n");
}
void bubble(int a[])  //排序函數 
{
	int i,j,temp;
		for(i=1;i<SIZE;i++)
		for(j=0;j<(SIZE-i);j++)
		if(a[j]<a[j+1])
{	
	temp=a[j];
	a[j]=a[j+1];
	a[j+1]=temp;}
}
