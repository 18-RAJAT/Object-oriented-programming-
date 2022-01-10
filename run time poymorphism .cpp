// //achieve run tym polymorphism is pointer and reference

// #include<bits/stdc++.h>
// using namespace std;

// class base
// {
//     public:
//     virtual void fun()
//     {
//         cout<<"base"<<endl;
//     }
// };

// class derived  : public base
// {
//     public:
//     void fun()
//     {
//         cout<<"derived"<<endl;
//     }
// };

// int main()
// {
//     base *b = new derived(); //*** output   --->derived
//     b->fun();
//     return 0;
// }



// class base
// {
//     public:
//     virtual void fun()
//     {
//         cout<<"base"<<endl;
//     }
// };

// class derived : public base
// {
//     public:
//     void fun()
//     {
//         cout<<"virtual"<<endl;
//     }

// };

// int main()
// {
// base*b=new derived ();           //***output-->virtual
// b->fun();
// return 0;    
// }




//without virtual function::::::

// #include<bits/stdc++.h>
// using namespace std;

// class base
// {
//     public:

//     void fun()
//     {
//         cout<<"base"<<endl;
//     }
// };

// class derived : public base{
//     public:
//     void fun()
//     {
//         cout<<"virtual"<<endl;
//     }
// };

// int main()
// {
//     base *b = new derived();
//     b->fun();
//     return 0;                   //without virtual function we have get the output is ----->>>base
// }



//1 more changeeeee......

//without virtual function::::::

// #include<bits/stdc++.h>
// using namespace std;

// class base
// {
//     public:

//    virtual  void fun(int x)
//     {
//         cout<<"base"<<endl;
//     }
// };

// class derived : public base{
//     public:
//     void fun(double y)
//     {
//         cout<<"virtual"<<endl;
//     }
// };

// int main()
// {
//     base *b = new derived();
//     base *a = new derived();
//     b->fun(11.1);
//     a->fun(11);
//     return 0;                   //with parameter this is through the output is base......whyyyyyy????
// }




//**% we can access the derived class by using override keyword 


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
    base *b = new derived();
    base *a = new derived();
    b->fun(11.1);
    a->fun(11);
    return 0;                   //with parameter this is through the output is base......whyyyyyy????
}
