#include "Clock.h"
#include "test.h"

void main1(){
    Clock c(10,11,12);
    c.Display();
}
/*子对象的初始化，和分配内存的顺序*/
void main2(){
    contain C1;
    contain C2(1,2);
}
/*const 和引用的初始化*/
void main3(){
    OBJ O1;
    O1.Display();
    std::cout<<OBJ::Type_A<<std::endl;
    std::cout<<OBJ::Type_B<<std::endl;
    
}

int main(void){
    main3();
    return 0;
}