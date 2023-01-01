#include <iostream>
using namespace std;
void add(int number1,int number2);
void product(int number1,int number2);
void substract(int number1,int number2);
void division(float number1,float number2);
main(){
 int number1,number2,number3,number4;
 string operation;
 cout<<"Enter no 1 ";
 cin>>number1;
 cout<<"Enter no 2 ";
 cin>>number2;
 cout<<"Enter no 3 ";
 cin>>number3;
 cout<<"Enter no 4 ";
 cin>>number4;
while(true){
 cout<<"Enter operation (+-*/) ";
 cin>>operation;
if(operation == "+")
 {
  add(number1,number2);
 }
if(operation == "-")
 {
  substract(number1,number2);
 }
if(operation == "*")
 {
  product(number3,number4);
 }
if(operation == "/")
 {
  division(number1,number2);
 }
}
}
void add(int number1,int number2){
 int sum;
 sum=number1+number2;
 cout<<"the sum is "<<sum <<endl;
}
void product(int number1,int number2){
 int pro;
 pro=number1*number2;
 cout<<"The product is "<<pro <<endl;
}
void substract(int number1,int number2)
{
 int subs;
 subs=number1-number2;
 cout<<"The substraction is "<<subs <<endl;
}
void division(float number1,float number2){
 float div;
 div=number1/number2;
 cout<<"The division is "<<div <<endl;
}
