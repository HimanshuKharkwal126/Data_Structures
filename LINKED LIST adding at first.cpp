#include<stdio.h>
#include<stdlib.h>
struct Node{
	int data;
	struct Node *next;	
};
void traversing(struct Node *ptr){	
	printf("Elements are :\n");
	int count=0;
	while(ptr!=NULL){
		printf("  %d\n",ptr->data);
		ptr=ptr->next;
		count++;
}
printf(" Total no of nodes are:%d",count);
}                                                                 //   { adding data at first ....Linked list ....!    }
struct Node *insertAtStart(int data,struct Node *first){
	struct Node *ptr=(struct Node *)malloc(sizeof(struct Node));
	ptr->data=data;
	ptr->next=first;
	return ptr;
} 
int main(){
struct Node *head;
struct Node *second;
struct Node *third;
struct Node *fourth;

head=(struct Node*)malloc(sizeof(struct Node));
second=(struct Node*)malloc(sizeof(struct Node));
third=(struct Node*)malloc(sizeof(struct Node));
fourth=(struct Node*)malloc(sizeof(struct Node));

head->data=7;
head->next=second;

second->data=45;
second->next=third;

third->data=67;
third->next=fourth;

fourth->data=55;
fourth->next=NULL;

head=insertAtStart(50,head);
traversing(head);
}
