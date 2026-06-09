#include<iostream>
class virtualItem
{
int code;
string name;
virtual void add(){}
virtual void setCode(code){this.code = code;}
virtual int getCode(){return this.code = code;}
virtual void setName(name){this.name = name;}
virtual string getName(){return this.name;}
}