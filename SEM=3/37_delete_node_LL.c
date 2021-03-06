/*
Name: Chirag Borawake
Class: SY BCA
Roll No:2012

Q. 37) Write a �C� program to delete all the nodes in a singly linked list which have value N.

*/
#include<conio.h>
#include<stdio.h>
#define TRUE 1
#define FALSE 0
struct node
{
	int data;
	struct node *next;
};
typedef struct node data;
data * start,*temp,*prev,*newData;
void display();
void getData(data * newData);
void create();
void deleteNode();
data * getNode();
void main()
{
	prev = temp = newData = start=NULL;
	create();
	display();
	deleteNode();
	getch();
}	
void create()
{
	do
	{
		newData = getNode();
		if(start == NULL)
		{
			start = newData;
		}
		getData(newData);
		if(prev != NULL)
		{
			prev->next=newData;
		}
		prev=newData;
		printf("\n Want to add one more data[Y/N]:");
	}while(getche()!='N');
}
data * getNode()
{
	temp=(data *)malloc(sizeof(data));
	temp->data=0;
	temp->next=NULL;
	return temp;
}
void getData(data * newData)
{
	printf("\n Enter Data:");
	scanf("%d",&newData->data);
}
void display()
{
	prev = start;
	printf("\n Link list is:");
	while(prev != NULL)
	{
		printf(" %d",prev->data);
		prev=prev->next;
	}
}
void deleteNode()
{
	int node,isPresent = TRUE;
	printf("\n Enter which node you want to delete: ");
	scanf("%d",&node);
	prev = start;
	while(prev != NULL)
	{
		if(prev->data == node)
		{
			isPresent = TRUE;
			start = prev->next;
			break;
		}
		else
		{
			temp = prev;
			prev=prev->next;	
			if(prev->data == node)
			{
				temp->next=prev->next;
				break;
			}
		}
	}
	if(isPresent ==FALSE)
	{
		printf("\n There is no node present as %d.",node);
	}
	else
	{
		display();
	}
}
/*

 Enter Data:1

 Want to add one more data[Y/N]:Y
 Enter Data:2

 Want to add one more data[Y/N]:Y
 Enter Data:3

 Want to add one more data[Y/N]:Y 
 Enter Data:4

 Want to add one more data[Y/N]:Y
 Enter Data:5

 Want to add one more data[Y/N]:N
 Link list is: 1 2 3 4 5
 Enter which node you want to delete: 4

 Link list is: 1 2 3 5

*/









                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
