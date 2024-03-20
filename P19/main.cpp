// #include "String.h"
#include <iostream>
#include "Test.h"
using namespace std;

int n;  //未初始化的全局变量，初始值为0，存放在.BSS段中
int n2=100;//初始化的全局变量，，存放在.data段中
void main1(){
    
    Singleton* temp = Singleton::Getinstance1(); //
    Singleton* temp2 = Singleton::Getinstance1(); //
    
    
}
void main2(){
    Singleton& temp = Singleton::Getinstance2(); //
    Singleton& temp2 = Singleton::Getinstance2(); //
}

int main(void){
    main2();


    return 0;
}