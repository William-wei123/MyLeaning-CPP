// #include "String.h"
#include <iostream>
#include "Test.h"
using namespace std;

int n;  //未初始化的全局变量，初始值为0，存放在.BSS段中
int n2=100;//初始化的全局变量，，存放在.data段中
void main1(){
    
    Test temp(1); //栈上的对象
    cout<<Test::count_<<endl;
    Test* temp2 = new Test(2);     //堆上函数
    cout<<Test::count_<<endl;
    delete temp2;
}
void main2(){

}

int main(void){
    main1();


    return 0;
}