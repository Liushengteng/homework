#include <stdio.h>
#include <stdlib.h>
#define SIZE 5
void show(int a[]),bubble(int a[]);
int main(int argc, char *argv[])
{
int FirstNumber,SecondNumber,ThirdNumber,ForthNumber,FifthNumber;   //�]�w�ܼ� 
printf("�п�J:");
scanf("%d %d %d %d %d",&FirstNumber,&SecondNumber,&ThirdNumber,&ForthNumber,&FifthNumber);   //��J�ܼƼƦr 
int data[SIZE]={FirstNumber,SecondNumber,ThirdNumber,ForthNumber,FifthNumber}; //�}�C�Ƨ� 
printf("�Ƨǫe..\n");
show(data);       //�I�s��� 
bubble(data);     //��w�Ƨ� 
printf("�Ƨǫ�..\n");
show(data);       //�I�s���
system("PAUSE"); 
return 0;
}
void show(int a[])   //��ܨ�� 
{ 
	int i;
	for(i=0;i<SIZE;i++)
	printf(" %d",a[i]);
	printf("\n");
}
void bubble(int a[])  //�ƧǨ�� 
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
