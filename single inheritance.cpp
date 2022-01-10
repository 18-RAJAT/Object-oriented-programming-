#include<bits/stdc++.h>
using namespace std;

class vahicle
{
    public:
    void derivedvahicle()
    {
        cout<<"driving"<<endl;
    }
};

class car:public vahicle
{
    public:
    void gettires()
    {
        cout<<"four tires"<<endl;
    }
};
int main()
{
    car c;
    c.derivedvahicle();
    c.gettires();

    return 0;
}
