#include <iostream>
using namespace std;
main(){

float initial;
float final;
float time;
float acceleration;
cout << "Enter initial velocity:";
cin >> initial;
cout << "Enter final velocity";
cin >> final;
cout << "Enter time:";
cin >> time;
acceleration = (final-initial)/time;
cout << "Acceleration=" <<acceleration;
} 