// #include "String.h"
#include <iostream>
#include "coutedobject.h"
using namespace std;

void main1(){
    cout<<coutedobject::count_<<endl;
    cout<<coutedobject::Getcount2()<<endl;
    coutedobject temp1;
    cout<<coutedobject::count_<<endl;
    coutedobject* temp2 = new coutedobject;
    cout<<coutedobject::count_<<endl;
}
void main2(){

}

int main(void){
    main1();


    return 0;
}