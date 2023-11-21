#include<stdio.h>
#include<stdlib.h>
struct Node{
	int data;
	struct Node*next;	
};
void traversing(struct Node *ptr){	
	printf("\nElements are :\n");
	int i=0;
	while(ptr!=NULL){
		printf("%d node is %d\n",i,ptr->data);
		i++;
		ptr=ptr->next;
	}    }                          //    reverse of node LINKED LIST...                                                      	
struct Node *reverse(struct Node *first){
	struct Node *prev=NULL,*ptr=first,*q;
	while(ptr!=NULL){
		q=ptr->next;
		ptr->next=prev;
		prev=ptr;
		ptr=q;
	}
	ptr=prev;
	return ptr;
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
first=reverse(first);
traversing(first);
}
