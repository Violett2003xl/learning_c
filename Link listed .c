#include <stdio.h>
#include <stdlib.h>
typedef struct node_s{
	int id;
	struct node_s* pNext;
}Node,*PNode;

PNode createNode(void);
void addNode(PNode head);
void displayNode(PNode head);

int main(void){
	PNode head = NULL;
	head =createNode();
	addNode(head);//@
	addNode(head);
	addNode(head);
	displayNode(head);
	return 0;
}
PNode createNode(void)
{	
	PNode head = NULL;
	head = (PNode)malloc(sizeof(Node));
	head->pNext = NULL;
	head->id = 1;
	return head;	
}
void addNode(PNode head){
	PNode node = NULL,temp = NULL;//��ӽ�� ��@���� 
	if(NULL == head) return;
	node =(PNode)malloc(sizeof(Node));//sizeof���Ǻ����ǲ�����@
	printf("������һ�����������س�������");//@ 
	scanf("%d",&node->id);//@
	node->pNext = NULL;//@
	
	for(temp=head;temp->pNext!=NULL;temp=temp->pNext)//ָ����Ϊ�ռ���ѭ�� 
	
	temp->pNext = node;//tempָ�����һ����� 
void displayNode(PNode head){
	if(NULL == head) return;
	PNode temp = head;
	for(;temp!=NULL;temp=temp->pNext)
	{
		printf("date:%d\n",temp->id);
	}
}
