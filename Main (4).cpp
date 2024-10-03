#include<iostream>
using namespace std;

//fuction to add two integers
int add(int a, int b){
  return a + b;
}
//overload funtion to add two double value
double add(double a , double b ){
  return a+b;
}
int main(){
  //using the add funtion with int
 int intResult=add(10,20);
  cout << "sum of integers 10 and 20"<<intResult<<endl;
  
  //using the add funtion with double argument
  double doubleResult=add(5.5,7.8);
  cout <<"sum of double 5.5 and 7.8"  <<doubleResult<<endl;

return 0 ;} 