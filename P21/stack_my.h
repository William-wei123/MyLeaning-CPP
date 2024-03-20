#ifndef STACK_MY__
#define STACK_MY__
/*新入元素放后面*/
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
struct Link
{
    /* data */
    int data;
    struct Link* next = NULL;

    
};

struct Stack
{
    /* data */
    struct Link* head;
    int size;
};


void StackInit(struct Stack* stack){
    stack->head = NULL;
    stack->size = 0;
}
void StackPush(struct Stack* stack, const int data){
    
    Link* CurretNode = NULL;
    Link* new_Node = (Link*)malloc(sizeof(Link));
    assert(new_Node != NULL);
    new_Node->data = data;
    
    if (stack->head == NULL){
        stack->head = new_Node;

    }else{
        CurretNode = stack->head;
        for(int i=0;i<stack->size-1;i++){
            CurretNode = CurretNode->next;
        }
        CurretNode->next = new_Node;
        
    }
    stack->size++;
    
   
    
}
int StackEnpty(struct Stack* stack){
    return (stack->size == 0);
}
int StackPop(struct Stack* stack, int* data){
    
    Link* CurretNode = stack->head;
    // Link* new_Node = (Link*)malloc(sizeof(Link));
    assert(stack->head != NULL);
    // new_Node->data = data;
    
    for(int i=0;i<stack->size-1;i++){
        CurretNode = CurretNode->next;
    }
    *data = CurretNode->data;
    free(CurretNode);
    stack->size--;
    

}

void CleanStack(Stack* stack){
    Link* tempNode = stack->head;
    for (int i = 0;i<stack->size;i++){
        
        stack->head = tempNode->next;
        free(tempNode);
        tempNode = stack->head;
    }
    stack->size = 0;
}

#endif