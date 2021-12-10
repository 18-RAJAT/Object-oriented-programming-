

#include<bits/stdc++.h>
using namespace std;

//class is a blueprint of an object....!!
class employee
{

public:
    //this is attributes....!!
  string name;
  string company;
  int age;

  void self()
  {
      //colling function in anoter base class
      cout<<"name-->"<<name<<endl;
      cout<<"company-->"<<company<<endl;
      cout<<"age-->"<<age<<endl;
  }
  
};
int main()
{
    employee  employee1;/*successfully created a varibale type is employeee*/
  
  //accessing the elements...!!
    employee1.name="rajat";
    employee1.company="amazon";
    employee1.age=18;

 
   employee1.self();
    cout<<endl;

}
//protected::access to class members in the member

