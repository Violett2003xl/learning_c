#include <stdio.h>
#include <stdlib.h>
typedef struct node 
{
	int data;
	struct node *next;			
}LISTNODE; 

	LISTNODE *creatlist(int *s);
	void outlist(LISTNODE *head);
	int find(LISTNODE *head,int key);
	
	
int main(){
	int a[5]={11,22,33,44,55};
	int key,i;
	LISTNODE *head;
	head=creatlist(a);
	outlist(LISTNODE *head);
	printf("input a date:");
	scanf("%d",&key);
	i=find(head,key);
	if(i == 0)
		printf("Not found!\n");
	else
		printf("The number is:%d\n",i);
	return 0;
}
int find(LISTNODE *head,int key){
	LISTNODE *p;
	int i=0;
	p=head->next;
	while(p!=NULL){
	i++;
		if(p->data==key)
			return i;
		else
			p=p->next;
	} 
	return 0;
} 	
