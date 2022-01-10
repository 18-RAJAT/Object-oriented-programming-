#include<bits/stdc++.h>
using namespace std;

class youtuber
{
    int x;
    public:
    youtuber(int x):x{x}
    
    {
        cout<<"youtuber"<<endl;
    }
};

class engineer 
{
    int y;

    public:
    engineer(int y):y{y}
    {
        cout<<"engineer"<<endl;
    }
};

class rajat:public engineer,public youtuber
{
    public:
    rajat (int x,int y):youtuber(x),engineer(y)
    {
        cout<<"rajat"<<endl;
        
    }
};

int main()
{
    rajat r1(1,2);
    return 0;

}