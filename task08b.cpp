#include <iostream>
using namespace std;
main(){
int digit;
int sum1;
int sum2;
int sum2a;
int sum3;
int sum3a;
int sum4;
int sum4a;
int total;
cout << "Enter the value : ";
cin >> digit;
sum1= (digit%10);
sum2= digit/10;
sum2a=sum2%10;
sum3=digit/100;
sum3a= sum3%10;
sum4=digit/1000;
sum4a=sum4%10;
total= sum1+sum2a+sum3a+sum4a;
cout << "the total sum is :" << total;
}



