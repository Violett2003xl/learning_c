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
	delnode(head,key);//ɾ��������Ϊkey�Ľ�� 
	outlist(head);
	return 0;
}

void delnode(LISTNODE *head,int key){
	LISTNODE *P,*S
	s=head->next;//sָ���һ����� 
	p=head;//pָ��sָ�����ǰ����� 
	while(s!=NULL){
		if(s->data!=key)//����ȼ����Ƚ� 
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
