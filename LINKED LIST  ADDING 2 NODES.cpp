#include<stdio.h>
#include<stdlib.h>
struct Node{
	int data;
	struct Node*next;	
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
}      
void merge(struct Node *first,struct Node *fifth){
	struct Node *ptr=first;
	while(ptr->next!=NULL){
		ptr=ptr->next;
	}                                                        //  ADDING 2 NODES  ..LINKED LIST
	ptr->next=fifth;
	while(ptr->next!=NULL){	
		ptr=ptr->next;
	}}
int main(){
struct Node *first,*second,*third,*fourth,*fifth,*sixth,*seventh,*eighth,*ninth;
first=(struct Node*)malloc(sizeof(struct Node));
second=(struct Node*)malloc(sizeof(struct Node));
third=(struct Node*)malloc(sizeof(struct Node));
fourth=(struct Node*)malloc(sizeof(struct Node));
fifth=(struct Node*)malloc(sizeof(struct Node));
sixth=(struct Node*)malloc(sizeof(struct Node));
seventh=(struct Node*)malloc(sizeof(struct Node));
eighth=(struct Node*)malloc(sizeof(struct Node));
ninth=(struct Node*)malloc(sizeof(struct Node));
first->data=7;
first->next=second;
second->data=45;
second->next=third;
third->data=67;
third->next=fourth;
fourth->data=55;
fourth->next=NULL;
fifth->data=8;
fifth->next=sixth;
sixth->data=4;
sixth->next=seventh;
seventh->data=6;
seventh->next=eighth;
eighth->data=99;
eighth->next=ninth;
ninth->data=98;
ninth->next=NULL;
merge(first,fifth);
traversing(first);
}
