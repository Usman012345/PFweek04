#include <iostream>
using namespace std;
void iseven(int remainder);
main()
{
 int number,remainder;
while(true)
  {
 cout<<"Enter number ";
 cin>>number;
 remainder=number%2;
 iseven(remainder);
  }
}
void iseven(int remainder)
{

 if(remainder == 0)
 {
  cout<<"The number is even  ";
 }
 if(remainder != 0)
  {
   cout<<"The number is odd.";
  }
}