#include "String.h"


void main1(){
    String s1("AAA");
    String s2 = s1;
    s1.Display();
    // s2.Display();
    String s3;
    s3.Display();
    s3 = s2;    //等号运算符 系统默认实施浅拷贝 s3.operator=(s2)
    // s
}
void main2(){
    String S1;
    String *p = &S1;    //默认调用 系统自动生成的 S1.operator&() 

    const String *PP = &S1; //默认调用 系统自动生成的 S1.operator&() const   函数原型const operator&&() const
   

}

int main(void){
    main1();


    return 0;
}