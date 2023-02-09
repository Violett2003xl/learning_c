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
	PNode node = NULL,temp = NULL;//添加结点 用@代表 
	if(NULL == head) return;
	node =(PNode)malloc(sizeof(Node));//sizeof不是函数是操作符@
	printf("请输入一个整数，按回车结束：");//@ 
	scanf("%d",&node->id);//@
	node->pNext = NULL;//@
	
	for(temp=head;temp->pNext!=NULL;temp=temp->pNext)//指针域不为空继续循环 
	
	temp->pNext = node;//temp指向最后一个结点 
void displayNode(PNode head){
	if(NULL == head) return;
	PNode temp = head;
	for(;temp!=NULL;temp=temp->pNext)
	{
		printf("date:%d\n",temp->id);
	}
}
