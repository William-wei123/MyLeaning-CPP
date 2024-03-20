#ifndef STACK__CPP__H
#define STACK__CPP__H

#include<iostream>
using namespace std;

class Link_Node
{
private:
    /* data */
public:
    Link_Node(int date);
    ~Link_Node();
    int date_;
    Link_Node* next_;
};
class stack_class
{
private:
    /* data */
    int size_;
    Link_Node* head_;
public:
    stack_class(/* args */);

    // void StackInit();
    void Push(const int data);
    void Pop(int& data);
    void Clean();
    ~stack_class();
};



Link_Node::Link_Node(int date):date_(date)
{
}

Link_Node::~Link_Node()
{
    cout<<"销毁节点:"<<date_<<endl;
}


stack_class::stack_class(/* args */)
{
    size_=0;
    head_=0;
}

void stack_class::Push(const int data){
    Link_Node* temp_NOde = new Link_Node(data);
    if (head_==0){
        head_ = temp_NOde;
    }else{
        temp_NOde->next_ = head_;
        head_ = temp_NOde;
    }
    size_++;
}
void stack_class::Pop(int& data){
    Link_Node* temp_NOde = head_;
    data = temp_NOde->date_;
    head_ = temp_NOde->next_;
    delete temp_NOde;
    size_--;
}

void stack_class::Clean(){
    Link_Node* temp_NOde = head_;
    for(int i=0;i<size_-1;i++){
        head_ = temp_NOde->next_;
        delete temp_NOde;
    }
    size_ = 0;

}

stack_class::~stack_class()
{
    Link_Node* temp_NOde = head_;
    for(int i=0;i<size_-1;i++){
        head_ = temp_NOde->next_;
        delete temp_NOde;
    }   
}



#endif