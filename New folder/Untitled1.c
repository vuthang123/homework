#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
//#include<cstdlib.h>
struct Node
{
	uint32_t Data;//tro data phan tu ke tiep 
	struct Node * next;
};
 
 typedef struct Node NodeTypes;
 
 void AddNode(NodeTypes **head ,uint32_t data );
 
 void main ()
 {
 	NodeTypes * head = NULL;
 	AddNode(&head,10);
 	printf("%x", head->Data);
 }
void AddNode(NodeTypes **head ,uint32_t data )
 {
 	/*Dynamic Allocate for Node*/
 	NodeTypes * new_node= (NodeTypes*)malloc(sizeof(NodeTypes));
 	/*Assign Data for Node*/
 	new_node->Data = data;
 	
 	new_node->next = NULL;
 	
 	*head = new_node;
 }
 
