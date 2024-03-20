#ifndef DB__HH__
#define DB__HH__
#include<iostream>
using namespace std;




class DBHelper
{
private:
    /* data */
public:
    DBHelper(/* args */);
    void Open(){
        cout<<"Open......."<<endl;
    }
    void Close(){
        cout<<"Close......."<<endl;
    }

    void Query(){
        cout<<"Query......."<<endl;
    }
    ~DBHelper();
};

DBHelper::DBHelper(/* args */)
{
}

DBHelper::~DBHelper()
{
    cout<<"~DBHelper"<<endl;
}

class DB
{
private:
    /* data */
    DBHelper *db_;
public:
    DB(/* args */);
    DBHelper* operator->(){
        return db_;
    }
    ~DB();
};

DB::DB(/* args */)
{
    db_ = new DBHelper();
}

DB::~DB()
{
    delete db_;
}


#endif