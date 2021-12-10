#include<bits/stdc++.h>
using namespace std;


class employee
{

public:
   
  string name;
  string company;
  int age;

  void self()
  {
      cout<<"name-->"<<name<<endl;
      cout<<"compnay-->"<<company<<endl;
      cout<<"age-->"<<age<<endl;
  }
  employee(string name,string compony,int age)
  {
      name=name;
      company=company;
      age=age;
  }
  
};
int main()
{
    employee  employee1=employee("rajat","amazon",18);
 
   employee1.self();
    cout<<endl;

}
