#include<bits/stdc++.h>
using namespace std;

class youtuber
{
    public:
    youtuber(int x)
    {
        cout<<"youtuber"<<endl;
    }
};

class engineer
{
    public:
    engineer(int y)
    {
        cout<<"engineer"<<endl;
    }
};

class rajat:public engineer,public youtuber
{
    public:

    rajat(int x,int y):engineer(y),youtuber(x)
    {
        cout<<"rajat"<<endl;
    }
};

int main()
{
    rajat r1(1,2);
    return 0;   
}
