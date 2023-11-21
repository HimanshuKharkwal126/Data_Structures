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
}                                              //  { deleting middle node  LINKED LIST  ....!    }
printf(" Total no of nodes are:%d",count);
}                                                           	
struct Node * deleteAtIndex(struct Node *first,int index){
	int i;
struct Node *p=first;
struct Node *q=first->next;
for(i=0;i<index-1;i++){
	p=p->next;
	q=q->next;
}   
p->next=q->next;
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
first=deleteAtIndex(first,2);
traversing(first);
}

