#include "Clock.h"
#include "test.h"
void main1(){
    Clock c(10,10,10);
    int i=60;
   
    c.Display();
    for (i=60;i>=0;i--){
        c.Updata();
        c.Display();
    }
}

//类型转换构造函数
void main2(){
    test t1(10);

    t1 = 20;        //赋值操作，先构造一个临时test类，20  再赋值给t1
                    //赋值完之后直接销毁
                    //当exciplit  声明构造函数之后，此语句报错

    test *t2 = new test(30);     //new  调用构造函数

    test t3  = 40;  //隐式转换， 此处=不是赋值运算符，会调用构造函数，等效于test t3(30)，，隐式转换
                    //当exciplit  声明构造函数之后，此语句报错
    t1 = t3; //赋值操作     ，调用t1.operator=(t3)
    delete t2;
}
int main(void)
{
    main2();
    return 0;
}