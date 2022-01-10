

#include<bits/stdc++.h>
using namespace std;

class base
{
    public:

   virtual  void fun(int x)
    {
        cout<<"base"<<endl;
    }
};

class derived : public base{
    public:
    void fun(int x)
    

    //using override keyword....!!
    
    override
    {
        cout<<"virtual"<<endl;
    }
};

int main()
{

    //using reference 
    
    derived d;

    base &b=d;
    b.fun(10);

    return 0;

}
