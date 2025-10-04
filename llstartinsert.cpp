#include <stdio.h>
#include<malloc.h>
struct Link
{
	int data;
	struct Link *next;
};

typedef struct Link Node;  //struct ka data type node
Node *start=NULL,*last;
Node* insert(Node *);
void insert_first();
void display(Node *);

int main()
{
	int ch;
	last=start;
do{
	printf("\n Press 1 for insert: ");
	printf("\n Press 2 for Display: ");
	printf("\n Press 3 for insert first: ");
			 printf("\n Enter Your choice: ");
			 scanf("%d",&ch);
		  switch(ch)
		  {
		  	case 1:last=insert(last);
		  		break;
		  	case 2:display(start);
			    break;
	    		case 3:insert_first();
	    			break;
			 default:
			 	    ch=0;
					break;	
		  }
		  }while(ch!=0);
 return 0;
 }
 
 Node* insert(Node *ptr)
 {
 	int ch;
 	do{if(ptr==NULL)
	 {
	 	
	start=(Node *)malloc(sizeof(Node));
	ptr=start;
 		printf("Data = ");
 		scanf("%d",&ptr->data);
 	}
 		printf("For cont.. Press 1:- ");
 		scanf("%d",&ch);
 		if(ch==1)
 		{
 			ptr->next=(Node *)malloc(sizeof(Node));
 			ptr=ptr->next;
 			
 		printf("Data = ");
 		scanf("%d",&ptr->data);
		 }
	 }while(ch==1);

	 ptr->next=NULL;
	 return ptr;
 }
 void display(Node *ptr)
 {
 while(ptr!=NULL) 
 {	
 	printf("%d\t",ptr->data);
 	ptr=ptr->next;
 }
 }
 
 void insert_first()
 {
 	Node *New_node;
 	New_node=(Node *)malloc(sizeof(Node));
 	printf("New Data = ");
 	scanf("%d",&New_node->data);
 	
 	if(start==NULL)
 	{
 		New_node->next=NULL;
 		start=New_node;
	 }else{
	 	New_node->next=start;
	 	start=New_node;
	 }
 }
