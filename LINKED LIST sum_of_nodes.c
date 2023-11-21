#include<stdio.h>
#include<stdlib.h>
int main(){
	int i,n,sum=0,*ptr;
	printf(" enter the total element:");
	scanf("%d",&n);
	ptr=(int*)malloc(n*sizeof(int));
	if(ptr == NULL){
		printf(" error! memory not allocated!");                 // sum of elements:
		exit(0);		                                                             
	}                                                       // malloc function ....  { Linked list  }
		printf(" enter the element");
		for(i=0;i<n;i++){
			scanf("%d",ptr + 1);
			sum += *(ptr + 1);
		}
		printf(" sum = %d",sum);
		free(ptr);
	return 0;
}

