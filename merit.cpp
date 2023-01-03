#include <iostream>
using namespace std;
main(){
float merit1;
float merit2;
float merit3;


float matric;
cout << "Matric marks (out of 1100):";
cin >> matric;
float intermediate;
cout << " Inter marks (out of 550):";
cin >> intermediate;
float ecat;
cout << "Enter ecat marks (out of 400):";
cin >> ecat;
merit1= ecat*50/400;
merit2=matric*10/1100;
merit3=intermediate*40/550;
float aggregate;
aggregate=merit1+merit2+merit3;
cout << "YOUR AGGREGATE IS: " << aggregate;
} 