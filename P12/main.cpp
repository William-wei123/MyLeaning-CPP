#include "test.h"


test t0;    //全局对象先与main

/*new 和作用域还有构造函数和析构函数*/
void main1(){
    t0.Display();
    test t1;    //默认构造函数
    t1.Display();
    test t2(10);    //带参数的构造函数
    t2.Display();

    test * t3 = new test(20);   //new生成的对象，要手动delete
    t3->Display();
    delete t3;  //调用 t3->~test();    //不能被重载
    //堆栈，先进后出，先定义的后被删除
    cout<<"main..."<<endl;

}

/*数组*/
void main2(){
    test tarr[2] = {100, 200};
    test *tt = new test(300);
    delete tt;
    test *tt2 = new test[2];
    delete[] tt2;   //[]才能都析构掉，否则只能析构第一个？

}
int main(void){
    main2();
    return 0;
}