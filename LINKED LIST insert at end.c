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
}                                                                 //   { adding data and address at end ....Linked list ....!    }
struct Node *insertAtEnd(int data,struct Node *first){
	struct Node *ptr=(struct Node *)malloc(sizeof(struct Node));
    struct Node *p=first;
    ptr->data=data;
while(p->next!=NULL){
	p=p->next;
}
ptr->next=NULL;
p->next=ptr;
return first;
} 
int main(){
struct Node *first;
struct Node *second;
struct Node *third;
struct Node *fourth;

first=(struct Node*)malloc(sizeof(struct Node));
second=(struct Node*)malloc(sizeof(struct Node));
third=(struct Node*)malloc(sizeof(struct Node));
fourth=(struct Node*)malloc(sizeof(struct Node));

first->data=7;
first->next=second;

second->data=45;
second->next=third;

third->data=67;
third->next=fourth;

fourth->data=55;
fourth->next=NULL;

first=insertAtEnd(50,first);
traversing(first);
}
