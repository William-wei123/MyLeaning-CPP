#include"stack_my.h"
#include"stack_cpp.h"
void test(){
    Stack stack;
    int d;
    StackInit(&stack);
    printf("入栈顺序：");
    for(int i=0;i<4;i++){
        StackPush(&stack,i);
        printf("%d,",i);
    }
    printf("出栈顺序");
    for(int i=0;i<4;i++){
        StackPop(&stack,&d);
        printf("%d,",d);
    }
}

void test2(){
    stack_class stack;
    int d;
    
    printf("入栈顺序：");
    for(int i=0;i<4;i++){
        stack.Push(i);
        printf("%d,",i);
    }
    printf("出栈顺序");
    for(int i=0;i<4;i++){
        stack.Pop(d);
        printf("%d,",d);
    }
}

int main(){
    test2(); 
    return 0;
}