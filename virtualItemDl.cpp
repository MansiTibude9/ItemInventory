#include<iostream>
class virtualItemDL
{
virtual int count;
virtual void virtualAdd();
virtual void virtualUpdate();
virtual void remove();
virtual setByCode(code){this.code = code;}
virtual getByCode(){return this.code;} 
virtual setByName(){this.name = name;}
virtual getByName(){return this.name = name;}
virtual void removeAll(){}
virtual void setAll(){}
virtual int getAll(){}
virtual void setCount(count){this.count = count;}
virtual int getCount(){return this.count;}
}