#include<stdio.h > 
#include<stdlib.h> 
#include<stdint.h > 
struct node {
	uint32_t Data;
	struct Node *next;
	
};


typedef struct Node NodeTypes;


void AddNode(NodeTypes ** head ,uint32_t data);
void PrintList(NodeTypes * head);

void main()
{
	NodeTypes * head = NULL;
	
	AddNode(&head, 10);
	
	PrintList((head));
	
		
}

void AddNode(NodeTypes ** head ,uint32_t data)
{
	NodeTypes * new_node = (NodeTypes *)malloc(sizeof(NodeTypes));
	
	new_node->Data = data ;
	
	new_node->next = NULL ;
	
	*head = new_node ;
}	
void PrintList(NodeTypes * head)
{
	printf("%d",head->Data );
//	printf("%d",head->Data );
//	printf("%d",head->Data );

}





