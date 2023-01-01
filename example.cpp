#include <iostream>
using namespace std;
void add(int n1,int n2);
void product(int n1,int n2);
main(){
int n1,n2,n3,n4;
cout<<"Enter no 1 ";
 cin>>n1;
 cout<<"Enter no 2 ";
 cin>>n2;
cout<<"Enter no 3 ";
 cin>>n3;
 cout<<"Enter no 4 ";
 cin>>n4;
add(n1,n2);
product(n3,n4);
}

void add(int n1,int n2){
int sum;
sum=n1+n2;
cout<<"the sum is "<<sum <<endl;
}
void product(int n1,int n2){
int pro;
pro=n1*n2;
cout<<"The product is "<<pro <<endl;
}
