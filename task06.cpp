#include <iostream>
using namespace std;
void eligibility(int age);
main()
{
 int age;
 while(true)
  {
   cout<<"Enter age ";
   cin>>age;
   eligibility(age);
  } 
}

void eligibility(int age)
{
 if(age >= 18)
 {
   cout<<"you are eligible "<<endl;
 }
 if(age<18)
 {
  cout<<"you are not eligible "<<endl;
 }
}
