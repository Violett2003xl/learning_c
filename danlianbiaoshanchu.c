#include <stdio.h>
#include <stdlib.h>
typedef struct node 
{
	int data;
	struct node *next;			
}LISTNODE; 

	LISTNODE *creatlist(int *s);
	void outlist(LISTNODE *head);
	void delnode(LISTNODE *head,int key);
	
int main(){
	int a[5]={11,22,33,44,55};
	int key;
	LISTNODE *head;
	head=creatlist(a);
	outlist(head);
	printf("input a date:\n");
	scanf("%d",&key);
	delnode(head,key);//删除数据域为key的结点 
	outlist(head);
	return 0;
}

void delnode(LISTNODE *head,int key){
	LISTNODE *P,*S
	s=head->next;//s指向第一个结点 
	p=head;//p指向s指向结点的前驱结点 
	while(s!=NULL){
		if(s->data!=key)//不相等继续比较 
		{
			p=s;
			s=s->next;
		}
		else
			break;
	}
		if(s!=NULL){
			p->next=s->next;
			free(s);
		}
		else
			printf("the node is not exist!\n");
}
