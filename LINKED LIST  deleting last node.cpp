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
}                                              //  { deleting last node  LINKED LIST  ....!    }
printf(" Total no of nodes are:%d",count);
}                                                           	
struct Node * deleteEnd(struct Node *first){
struct Node *p=first;
struct Node *q=first->next;
while(q->next!=NULL){
	p=p->next;
	q=q->next;
}	
p->next=NULL;
free(q);
return first; 
}
int main(){
struct Node *first,*second,*third,*fourth;
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
first=deleteEnd(first);
traversing(first);
}
