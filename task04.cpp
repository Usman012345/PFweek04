#include <iostream>
using namespace std;
void result(int marks);
main()
{
 
  int marks;
 while(true)
 {
  cout <<"Enter your marks ";
  cin>>marks;
  result(marks);
 }
}
void result(int marks){
if(marks > 50,marks < 100)
{
  cout<<"pass"<<endl;
}
if(marks == 50){
  cout<<"workhard"<<endl;
}
if(marks < 50){
  cout<<"fail"<<endl;
}
if( marks > 100){
 cout <<"number is too big"<<endl;
}
}