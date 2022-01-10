#include<bits/stdc++.h>
using namespace std;

class youtuber
{
    public:
    youtuber()
    {
        cout<<"youtuber"<<endl;
    }
};

class engineer
{
    public:
    engineer()
    {
        cout<<"engineer"<<endl;
    }
};

class rajat:public youtuber,public engineer   //inherit all class in single unit of time.....
{
    public:
   rajat()
   {
       cout<<"rajat"<<endl;
   }
};

int main()
{
    rajat r1;
    return 0;
}
