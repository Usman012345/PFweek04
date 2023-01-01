#include <iostream>
using namespace std;
void calculatebill(int total_purchase,string day);
main()
{
 float total_purchase;
 cout<<"Enter total purchase ";
 cin>>total_purchase;
 string day;
 cout<<"Enter day ";
 cin>>day;
 calculatebill(total_purchase,day);
}
void calculatebill(int total_purchase,string day)
{
 float payable_amount,discount;
 if(day == "sunday")
  { 
   discount=total_purchase*(10/100);
   payable_amount= total_purchase - discount;
   cout<<"The payable amount is "<<payable_amount;
  }
 cout<<"The payable amount is "<<total_purchase;
}